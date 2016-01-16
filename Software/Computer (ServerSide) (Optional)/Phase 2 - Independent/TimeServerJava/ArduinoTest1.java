import gnu.io.CommPortIdentifier;
import gnu.io.SerialPort;
import gnu.io.SerialPortEvent;
import gnu.io.SerialPortEventListener;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.util.Enumeration;

import java.text.SimpleDateFormat;
import java.util.Calendar;

/**
 * @author ericjbruno
 */
public class ArduinoTest1 implements SerialPortEventListener {
    SerialPort serialPort = null;
    
    public static char[] alphabet = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    public static int FPS = 200/*200*/;
    public static int cycles = 200/*200*/;
    public static int loops = 20/*20*/;
    public static String thing = "aaaabbbbccccddddeeeeddddccccbbbbaaaa";//"@@@@####$$$$%%%%&&&&%%%%$$$$####@@@@"; //for equilizer animation
    
    
    private static final String PORT_NAMES[] = { 
        "/dev/tty.usbmodem", // Mac OS X
//        "/dev/usbdev", // Linux
//        "/dev/tty", // Linux
//        "/dev/serial", // Linux
//        "COM3", // Windows
    };
    
    private String appName;
    private BufferedReader input;
    private OutputStream output;
    
    private static final int TIME_OUT = 1000; // Port open timeout
    private static final int DATA_RATE = 115200; // Arduino serial port

    public boolean initialize() {
        try {
            CommPortIdentifier portId = null;
            Enumeration portEnum = CommPortIdentifier.getPortIdentifiers();

            // Enumerate system ports and try connecting to Arduino over each
            //
            System.out.println( "Trying:");
            while (portId == null && portEnum.hasMoreElements()) {
                // Iterate through your host computer's serial port IDs
                //
                CommPortIdentifier currPortId = (CommPortIdentifier) portEnum.nextElement();
                System.out.println( "   port" + currPortId.getName() );
                for (String portName : PORT_NAMES) {
                    if ( currPortId.getName().equals(portName) 
                      || currPortId.getName().startsWith(portName)) {

                        // Try to connect to the Arduino on this port
                        //
                        // Open serial port
                        serialPort = (SerialPort)currPortId.open(appName, TIME_OUT);
                        portId = currPortId;
                        System.out.println( "Connected on port" + currPortId.getName() );
                        break;
                    }
                }
            }
        
            if (portId == null || serialPort == null) {
                System.out.println("Oops... Could not connect to Arduino");
                return false;
            }
        
            // set port parameters
            serialPort.setSerialPortParams(DATA_RATE,
                            SerialPort.DATABITS_8,
                            SerialPort.STOPBITS_1,
                            SerialPort.PARITY_NONE);

            // add event listeners
            serialPort.addEventListener(this);
            serialPort.notifyOnDataAvailable(true);

            // Give the Arduino some time
            try { Thread.sleep(2000); } catch (InterruptedException ie) {}
            
            return true;
        }
        catch ( Exception e ) { 
            e.printStackTrace();
        }
        return false;
    }
    
    private void sendData(String data) {
        try {
            System.out.println("Sending data: '" + data +"'");
            
            // open the streams and send the "y" character
            output = serialPort.getOutputStream();
            output.write( data.getBytes() );
        } 
        catch (Exception e) {
            System.err.println(e.toString());
            System.exit(0);
        }
    }

    //
    // This should be called when you stop using the port
    //
    public synchronized void close() {
        if ( serialPort != null ) {
            serialPort.removeEventListener();
            serialPort.close();
        }
    }

    //
    // Handle serial port event
    //
    public synchronized void serialEvent(SerialPortEvent oEvent) {
        //System.out.println("Event received: " + oEvent.toString());
        try {
            switch (oEvent.getEventType() ) {
                case SerialPortEvent.DATA_AVAILABLE: 
                    if ( input == null ) {
                        input = new BufferedReader(
                            new InputStreamReader(
                                    serialPort.getInputStream()));
                    }
                    String inputLine = input.readLine();
                    System.out.println(inputLine);
                    break;

                default:
                    break;
            }
        } 
        catch (Exception e) {
            System.err.println(e.toString());
        }
    }

    public ArduinoTest1() {
        appName = getClass().getName();
    }
    
//     public static void main(String[] args) throws Exception {
//         ArduinoTest1 test = new ArduinoTest1();
//         if ( test.initialize() ) {
//             test.sendData("~");
// //             for(int h = 0; h < 900; h++)
// //             {
// //                 test.sendData("~" + alphabet[h%26] + "ZZZ;4;100;200;0");
// //                 Thread.sleep(1);
// //             }
//             Thread.sleep(870); //This no longer matters!! Just give it some time to get ready.
//             for(int h = 0; h < 1000000; h++)
//             {
//                 //for(int f = 0; f < 5; f++)
//                 {
//                     test.sendData("~" + alphabet[h%26] + alphabet[((h/26)%26)] + alphabet[((h/(26*26))%26)] + alphabet[((h/(26*26*26))%26)] + ";4;100;200;0");
//                 }
//                 try { Thread.sleep(/*3261*//*2061*//*3030*//*3033*//*5031*/2052); } catch (InterruptedException ie) {}
//                 {
//                     test.sendData("~" + alphabet[h%26] + alphabet[((h/26)%26)] + alphabet[((h/(26*26))%26)] + alphabet[((h/(26*26*26))%26)] + ";4;100;200;0");
//                 }
//                 try { Thread.sleep(/*3261*//*2061*//*3030*//*3033*//*5031*/980); } catch (InterruptedException ie) {}
//                 //try { Thread.sleep(/*3261*//*2061*//*3030*/3033/*5031*/); } catch (InterruptedException ie) {}
//             }
//             test.sendData("y");
//             try { Thread.sleep(2000); } catch (InterruptedException ie) {}
//             test.sendData("n");
//             try { Thread.sleep(2000); } catch (InterruptedException ie) {}
//             test.close();
//         }
// 
//         // Wait 5 seconds then shutdown
//         try { Thread.sleep(2000); } catch (InterruptedException ie) {}
    public static void main(String[] args) throws Exception {
        ArduinoTest1 test = new ArduinoTest1();
        long start= System.currentTimeMillis();
        Calendar cal = Calendar.getInstance();
        //cal.getTime();
        SimpleDateFormat sdf = new SimpleDateFormat("h:mmh mm");
        System.out.println( sdf.format(cal.getTime()) );
        if ( test.initialize() ) {
            test.sendData("~");
            Thread.sleep(870); //This no longer matters!! Just give it some time to get ready.
            test.sendData("~" + "STAR;4;1" + FPS + ";" + cycles + ";0"); //Send Inital Data
            Thread.sleep((int)((double)cycles/FPS*50)); //To have an offset
            //for(int h = 0; h < 1000; h++)
            while(true)
            {
                long t= System.currentTimeMillis();
                long end = t + (long)(1000 * ((double)cycles / FPS) * loops);
                Thread.sleep((int)(((double)cycles / FPS) * loops * 0.5));
                System.gc();
                while(System.currentTimeMillis() < end) {
                    //test.sendData("~" + alphabet[h%26] + alphabet[((h/26)%26)] + alphabet[((h/(26*26))%26)] + alphabet[((h/(26*26*26))%26)] + ";4;" + FPS + ";" + cycles +";0");
                    //cal = Calendar.getInstance();
                    test.sendData("~" + sdf.format(cal.getTime()) + /*thing + */";" + loops + ";4;" + FPS + ";" + cycles + ";" + "0");
                    Thread.sleep(3);
                }
//                 if(System.currentTimeMillis() - start > 24000)
//                 {
//                     System.out.println("Closing...");
//                     test.close();
//                     test.initialize();
//                     test.sendData("~");
//                     //Thread.sleep(870); 
//                     System.out.println("Restarting...");
//                 }
            }
            //test.sendData("y");
            //try { Thread.sleep(2000); } catch (InterruptedException ie) {}
            //test.sendData("n");
            //try { Thread.sleep(2000); } catch (InterruptedException ie) {}
            //test.close();
        }

        // Wait 5 seconds then shutdown
        try { Thread.sleep(2000); } catch (InterruptedException ie) {}
    }
//     public static void main(String[] args) throws Exception {
//         ArduinoTest1 test = new ArduinoTest1();
//         if ( test.initialize() ) {
//             test.sendData("~");
//             Thread.sleep(870); //This no longer matters!! Just give it some time to get ready.
//             test.sendData("~" + "AAAA;4;" + FPS + ";" + cycles + ";0"); //Send Inital Data
//             Thread.sleep((int)(cycles/FPS*100)); //To have an offset (1/10 of the cycle)
//             for(int h = 0; h < 1000; h++)
//             {
//                 long t= System.currentTimeMillis();
//                 long sleepTime = (long)(1000 * cycles / FPS *0.8); //sleep for 4/5 of the cycle
//                 long endSleep = t + sleepTime;
//                 long endSend = t+ (long)(1000 * cycles / FPS) + (long)((1000 * cycles / FPS) * 0.1); //spam the thing for the last 1/10th of the cycles,the entire 20 ms window and the first 1/10th of the next window, just to be safe
//                 Thread.sleep(sleepTime);
//                 while(System.currentTimeMillis() < endSend) {
//                     test.sendData("~" + alphabet[h%26] + alphabet[((h/26)%26)] + alphabet[((h/(26*26))%26)] + alphabet[((h/(26*26*26))%26)] + ";4;" + FPS + ";" + cycles +";0");
//                     Thread.sleep(1);
//                 }
//             }
//             test.sendData("y");
//             try { Thread.sleep(2000); } catch (InterruptedException ie) {}
//             test.sendData("n");
//             try { Thread.sleep(2000); } catch (InterruptedException ie) {}
//             test.close();
//         }
// 
//         // Wait 5 seconds then shutdown
//         try { Thread.sleep(2000); } catch (InterruptedException ie) {}
//     }
}