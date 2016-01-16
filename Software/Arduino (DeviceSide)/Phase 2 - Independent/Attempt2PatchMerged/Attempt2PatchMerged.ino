byte H_wide[] = {B00111100,B00111100,B00111100,B00000000,B00000000,B00111100,B00111100,B00111100};
byte E_wide[] = {B10000001,B11111101,B11111101,B10000001,B10000001,B11111101,B11111101,B10000001};
byte M_wide[] = {B01111110,B00111100,B01011010,B01100110,B01111110,B01111110,B01111110,B01111110};

byte A[] = {B11100111,B11011011,B10111101,B10111101,B10000001,B10111101,B10111101,B10111101};
byte B[] = {B11000001,B10111101,B10111101,B10111101,B11000001,B10111101,B10111101,B11000001};
byte C[] = {B11000111,B10111011,B11111101,B11111101,B11111101,B11111101,B10111011,B11000111};
byte D[] = {B11100001,B11011101,B10111101,B10111101,B10111101,B10111101,B11011101,B11100001};
byte E[] = {B10000001,B11111101,B11111101,B11111101,B10000001,B11111101,B11111101,B10000001};
byte F[] = {B10000001,B11111101,B11111101,B11111101,B11000001,B11111101,B11111101,B11111101};
byte G[] = {B11000111,B10111011,B11111101,B11111101,B11111101,B10001101,B10111011,B11000111};
byte H[] = {B10111101,B10111101,B10111101,B10111101,B10000001,B10111101,B10111101,B10111101};
byte I[] = {B10000001,B11100111,B11100111,B11100111,B11100111,B11100111,B11100111,B10000001};
byte J[] = {B10000001,B11110111,B11110111,B11110111,B11110111,B10110111,B10110111,B11001111};
byte K[] = {B11011101,B11101101,B11110101,B11111001,B11110101,B11101101,B11011101,B10111101};
byte L[] = {B11111101,B11111101,B11111101,B11111101,B11111101,B11111101,B11111101,B10000001};
byte M[] = {B10111101,B10011001,B10100101,B10111101,B10111101,B10111101,B10111101,B10111101};
byte N[] = {B01111110,B01111100,B01111010,B01110110,B01101110,B01011110,B00111110,B01111110}; //add
byte O[] = {B11000011,B10111101,B01111110,B01111110,B01111110,B01111110,B10111101,B11000011};
byte P[] = {B11000001,B10111101,B10111101,B11011101,B11110001,B11111101,B11111101,B11111101};
byte Q[] = {B11000011,B10111101,B01111110,B01111110,B01111110,B01011110,B10111101,B01000011};
byte R[] = {B11100001,B11011101,B10111101,B11011101,B11100001,B11101101,B11011101,B10111101};
byte S[] = {B11000111,B10111011,B11111101,B11100011,B11011111,B10111111,B10111101,B11000011}; //add
byte T[] = {B00000000,B00000000,B11100111,B11100111,B11100111,B11100111,B11100111,B11100111};
byte U[] = {B10111101,B10111101,B10111101,B10111101,B10111101,B10111101,B10111101,B11011011}; 
byte V[] = {B01111110,B01111110,B10111101,B10111101,B11011011,B11011011,B11100111,B11100111};
byte W[] = {B01111110,B01111110,B01100110,B01100110,B01100110,B01100110,B01100110,B10000001};
byte X[] = {B10111101,B10111101,B11011011,B11100111,B11011011,B11011011,B10111101,B10111101};
byte Y[] = {B10111101,B10111101,B11011011,B11100111,B11100111,B11100111,B11100111,B11100111};
byte Z[] = {B10000001,B11111101,B11111011,B11110111,B11101111,B11011111,B10111111,B10000001};

byte A_wide[]   = {B11100111,B11011011,B10111101,B01111110,B00000000,B01111110,B01111110,B01111110};
byte C_alt[]    = {B11000011,B10111101,B11111101,B11111101,B11111101,B11111101,B10111101,B11000011};
byte O_alt[]    = {B11100111,B11011011,B10111101,B10111101,B10111101,B10111101,B11011011,B11100111};
byte W_alt[] = {B01111110,B01111110,B01000010,B01011010,B01011010,B01011010,B01011010,B10011001};
byte excl_alt[] = {B11100111,B11000011,B11000011,B11000011,B11000011,B11100111,B11111111,B11100111};
byte exclaim[]  = {B11100111,B11100111,B11100111,B11100111,B11100111,B11100111,B11111111,B11100111};
byte blank[]    = {B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111};
byte full[]     = {B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000};

byte P1[] = {B10101010,B01010101,B10101010,B01010101,B10101010,B01010101,B10101010,B01010101};
byte P2[] = {B01010101,B10101010,B01010101,B10101010,B01010101,B10101010,B01010101,B10101010};

byte A_i[] = {~B11100111,~B11011011,~B10111101,~B10111101,~B10000001,~B10111101,~B10111101,~B10111101};
byte B_i[] = {~B11000001,~B10111101,~B10111101,~B10111101,~B11000001,~B10111101,~B10111101,~B11000001};
byte C_i[] = {~B11000111,~B10111011,~B11111101,~B11111101,~B11111101,~B11111101,~B10111011,~B11000111};
byte D_i[] = {~B11100001,~B11011101,~B10111101,~B10111101,~B10111101,~B10111101,~B11011101,~B11100001};
byte E_i[] = {~B10000001,~B11111101,~B11111101,~B11111101,~B10000001,~B11111101,~B11111101,~B10000001};
byte F_i[] = {~B10000001,~B11111101,~B11111101,~B11111101,~B11000001,~B11111101,~B11111101,~B11111101};
byte G_i[] = {~B11000111,~B10111011,~B11111101,~B11111101,~B11111101,~B10001101,~B10111011,~B11000111};
byte H_i[] = {~B10111101,~B10111101,~B10111101,~B10111101,~B10000001,~B10111101,~B10111101,~B10111101};
byte I_i[] = {~B10000001,~B11100111,~B11100111,~B11100111,~B11100111,~B11100111,~B11100111,~B10000001};
byte J_i[] = {~B10000001,~B11110111,~B11110111,~B11110111,~B11110111,~B10110111,~B10110111,~B11001111};
byte K_i[] = {~B11011101,~B11101101,~B11110101,~B11111001,~B11110101,~B11101101,~B11011101,~B10111101};
byte L_i[] = {~B11111101,~B11111101,~B11111101,~B11111101,~B11111101,~B11111101,~B11111101,~B10000001};
byte M_i[] = {~B10111101,~B10011001,~B10100101,~B10111101,~B10111101,~B10111101,~B10111101,~B10111101};
byte N_i[] = {~B01111110,~B01111100,~B01111010,~B01110110,~B01101110,~B01011110,~B00111110,~B01111110}; //add
byte O_i[] = {~B11000011,~B10111101,~B01111110,~B01111110,~B01111110,~B01111110,~B10111101,~B11000011};
byte P_i[] = {~B11000001,~B10111101,~B10111101,~B11011101,~B11110001,~B11111101,~B11111101,~B11111101};
byte Q_i[] = {~B11000011,~B10111101,~B01111110,~B01111110,~B01111110,~B01011110,~B10111101,~B01000011};
byte R_i[] = {~B11100001,~B11011101,~B10111101,~B11011101,~B11100001,~B11101101,~B11011101,~B10111101};
byte S_i[] = {~B11000111,~B10111011,~B11111101,~B11100011,~B11011111,~B10111111,~B10111101,~B11000011}; //add
byte T_i[] = {~B00000000,~B00000000,~B11100111,~B11100111,~B11100111,~B11100111,~B11100111,~B11100111};

byte V_i[] = {~B01111110,~B01111110,~B10111101,~B10111101,~B11011011,~B11011011,~B11100111,~B11100111};
byte W_i[] = {~B01111110,~B01111110,~B01000010,~B01011010,~B01011010,~B01011010,~B01011010,~B10011001};

byte *masterArray[] = { A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z, exclaim, blank, full, P1, P2 };


#include <EEPROM.h>

#define clock 8
#define HA 13

/* UI Plans:
 * Five Questions:
 * 1) What letter(s)?
 * 2) What speed?
 * 3) Do you have OCD?
 * 4) Do you want scrolling?
 * 5) How many screens?
 */
 
//Setup Variables
boolean serialMode = true;
char supportedChars[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '!', ' ' };

//The "options"/features
int* sequence; // Pad with number of screens in blank characters at the start and end
int length = 18; //length of sequence for the loop (num of charcters minus number of displays)
int cycles = 75; //number of cycles (time) spent on each letter (NOT PER FRAME)
boolean scrolling = true; //scrolling enable/disable
int displays = 5; //number of screens
int fps = 75; //777 is the max framerate at 2 displays, apparently 

//Temp Option Variables
int TFPS, Tcycles, *Tsequence, Tdisplays, Tlength;
boolean Tscrolling;

//Things that just need to be set (not changed or anything)
int f, i, x, d = 0, g, z; //loop variables
boolean once = false;
byte rowCount = B00000000;
byte buffer[8];
byte displaySelect = B00000000;
byte shift1[8];
byte shift2[8];
byte shift3[8];
byte shift4[8];
byte shift5[8];
byte shift6[8];
byte shift7[8];
byte shift8[8];
byte *shift[8] = {shift1, shift2, shift3, shift4, shift5, shift6, shift7, shift8};
int debug = 0;
byte temp, temp2;


void setup() 
{
  DDRD = B11111111; //make each column HIGH so no LED will eb turned on 
  DDRB = B11111111;
  
  if(serialMode == true)
  {
    boolean serialActive = serialTest();
    if(serialActive == true)
    {
      newSetup();
    }
    if(serialActive == false)
    {
      oldSetup();
    }
  }
  
  debug = ( ( (1000000 / fps) - (8 * 10.7 * displays) ) / 8 ); //Needs to be something. Set to 0 and everything breaks and this gets set to 132000000 //(2000 is about as high as you can go before each line refresh starts flickering) 
               //This (in theory) sets the refresh rate of the screen
               //(this value times 8 times at least 24 should be greater than 30 for no flicker)(The intermediate display code takes about 0.0104 Milliseconds or 10.4 Microseconds)
               //(this means to get 120 frames per second, in theory, the display needs to run at (1000000/120) - (8*10.7*number of displays) / 8 which is 881.04166666...)
               //(this means to get 24 frames per second, in theory, the display needs to run at (1000000/24) - (8*10.7*number of displays) / 8 which is 5047.63333...)
}


void loop() 
{
  if(scrolling == false)
  {
      for(f = 0; f <= length; f += displays)
      {       
        for(d = 0; d < displays; d++)
        {
           for(g = 0; g <= 7; g++)
            {
                shift[d][g] = masterArray[sequence[f + d]][g]; 
            }            
        }   
        
        displayFrame();
      }
  }
  
  if(scrolling == true)
  {
    if(once == false)
    {
      cycles = cycles / 8;
      once = !once;
    }
    
    for(f = 0; f <= (length - 1) ; f++)
    { 
        for(z = 0; z <= 7; z++)
        {
            for(d = 0; d < displays; d++)
            {
                for(int g = 0; g <= 7; g++)
                {
                    temp = masterArray[sequence[f+d]][g] >> z;          //Letter 1
                    temp2 = masterArray[sequence[f+d+1]][g] << (8 - z);   //Letter 2 
              
                    temp |= temp2; //Fun Fact: removing that one or operator makes this a non scrolling program. I suggest you find out why and possible use this to simplify ze code. (Unify scrolling/nonscrolling with an if aroudn this one line or something).
            
                    shift[d][g] = temp;
                }
            }
        
            displayFrame();
        }  
    }
  }

}

void displayFrame()
{
    int displayCases[displays - 1];  

    //loop for number of cycles
    for(i = 0; i <= cycles; i++) //loop for number of cycles per frame
    {
        rowCount = B00000000;
        
        //loop for the 8 rows per frame
        for(x = 0; x <=7; x++) 
        {          
            //Pre-row set display rows loop          
            for(d = 0; d < displays; d++) 
            {  
                displaySelect = B00000100 + (d * 2);
          
                if(shift[d][x] == buffer[d]) //Case 1 (surrect line equals the next line; no changes needed)
                {
                    displayCases[d] = 1;
                }
                
                if(shift[d][x] != buffer[d])
                {
                    //set buffer
                    buffer[d] = shift[d][x];
            
                    //This is beautiful and is shamelessly stolen from StackOverflow: http://stackoverflow.com/questions/8639396/verify-if-a-binary-array-is-a-subset-of-another-one-in-c
                
                /* The operation is performed with three bitwise operations, resulting in a
                 * sequence of bits that will be equal to zero if set_a is a subset of
                 * set_b. As a bonus, the positions where the sets differ will be
                 * available in the resulting sequence, and thus the number of differing
                 * positions can be obtained by counting the number of bits set (for exemple,
                 * with __builtin_popcount in GCC).
                 *
                 *   Exemple (TRUE):              Exemple (FALSE):
                 *   ================             ================
                 *   set_a   00010011             set_a   00001011
                 *   set_b   00110011             set_b   00110011
                 *   ----------------             ----------------
                 *   XOR     00100000             XOR     00111000
                 *   set_b   00110011             set_b   00110011
                 *   ----------------             ----------------
                 *   OR      00110011             OR      00111011
                 *   set_b   00110011             set_b   00110011
                 *   ----------------             ----------------
                 *   XOR     00000000             XOR     00001000
                 */
                    
                    if( ( ( (~shift[d][x-1] ^ ~shift[d][x]) | ~shift[d][x]) ^ ~shift[d][x]) == 00000000) //if it is a subset, then it is Case 2. Case 2 needs a and a postrow column value (real columns) and nothing else.
                    {
                      displayCases[d] = 2;
                    }
                    
                    if( ( ( (~shift[d][x-1] ^ ~shift[d][x]) | ~shift[d][x]) ^ ~shift[d][x]) != 00000000) //if not a subset, then it is Case 3. Case 3 needs a prerow column value (filler column) and a postrow column value (real columns).
                    {
                      displayCases[d] = 3;
                      
                      //blank COL (filler)
                      PORTB = displaySelect; //variable to know which screen to "send" to
                      PORTD = B11111111;     //blank filler values
        
                      PORTB |= B0000001;     //clock cycle to "apply"
                    
                      //delayMicroseconds (debug);
                    }  
                }
            }
            //end prerow display row loop
                
            //adjust rows
            {
                //ROW set
                //Simply moves to the next row
                PORTB = B00000010;
                PORTD = rowCount;
              
                PORTB |= B0000001;
            } 
            //end adjust rows
                
            //Post-row set display rows loop
            for(d = 0; d < displays; d++) 
            {
                displaySelect = B00000100 + (d * 2);

                if(displayCases[d] == 1){}
                    
                if(displayCases[d] == 2 || displayCases[d] == 3)
                {
                    //COL set
                    PORTB = displaySelect; //variable to know which screen to "send" to
                    PORTD = buffer[d];     //Publish actual column values for Cases 2 and 3
            
                    PORTB |= B0000001;     //clock cycle to "apply"
                }
                    
            }
            //End Post-row set display rows loop

          rowCount += 32; //Move to the next row
          delayMicroseconds(debug); //amount of time to show that one row for (multiply this by eight to get a rough estimate of the time a panel refresh takes) (and then multiply that by the number of cycles to see how long a frame is on the screen)
        }
        //end loop for the 8 rows per frame     
    }
    //end number of cycles per frame loop
    
} //end function

boolean serialTest()
{
  Serial.begin(9600);
  Serial.println();
  Serial.println(F("This program has been writen to work with terminals that return newline characters, "));
  Serial.println(F("return-carriage characters, both, and none. Be aware that if your terminal does not "));
  Serial.println(F("return newline/return-carriage characters, you will need to end your lines with a semicolon (;)."));
  Serial.println();
  Serial.println(F("Type something to continue with the setup. You have 10 seconds."));
  unsigned long startTime = millis();
  while(startTime + 10000 > millis())
  {
    if(startTime + 5000 == millis())
    {
      Serial.println(F("You have 5 more seconds."));
    }
    char nextTest = Serial.read();
    if(nextTest == '\n' || nextTest == ';')
    {
      return true;  
    }
    delay(1);
  }
  
  Serial.println(F("Time is up. Setup will not continue."));
  Serial.println(F("The Dot Matrix will be setup as per the previous settings."));
  Serial.end();
  return false;
}

void newSetup()
{
  stuffSetup();
  writeOptions();
  EEWrite();
}

void oldSetup()
{
  writeOptions();
  EERead();
}

void stuffSetup()
{
  Serial.println(F("You have started the setup."));
  
  String sequencePrelim = sequenceSetup();
  while(true)
  {
    if(sequencePrelim == ">>>>>>>>")
    {
      sequencePrelim = sequenceSetup();
    }
    if(sequencePrelim != ">>>>>>>>")
    {
      break;
    }
  }
  
  Tlength = lengthSetup(sequencePrelim);
  
  Tdisplays = displaySetup();
  
  /*sequence =*/ //sequenceParsing(sequencePrelim, Tdisplays, Tlength);
  
  sequenceParsingDirect(sequencePrelim, Tdisplays, Tlength);
  
  Tlength = Tlength + Tdisplays;
  
  TFPS = fpsSetup();
  
  Tcycles = cyclesSetup(TFPS);

  Tscrolling = scrollingSetup();
  
  printDataTable(sequencePrelim, Tsequence, Tlength, Tcycles, Tscrolling, Tdisplays, TFPS);
  
  Serial.println();
  Serial.println(F("You have completed the setup."));
  Serial.println(F("Serial will now close."));
  Serial.end();
}

int lengthSetup(String rawSeq)
{
  clearSerial();
  
  //Serial.println(F("How long is the sequence you wish to display? Enter a number."));
  //Serial.println(F("Ex: If you want a sequence 5 characters long, enter 5."));
  
  //while (Serial.available() <= 0){}
  
  //int temp = Serial.parseInt();

  Serial.print(F("The length of your sequence is: "));
  Serial.println(rawSeq.length());
  
  return rawSeq.length();
}

void clearSerial()
{
  while(Serial.available() > 0)
  {
    Serial.read();
  }//These are to clear the newline are carriage return things. Two not needed if carriage return is off.
}

void sequenceParsingDirect(String rawSeq, int displays, int length)
{
  sequence = new int[displays + length + displays];
  
  for(int q = 0; q < displays; q++)
  {
    for(int u = 0; u < (sizeof(supportedChars)/sizeof(char)); u++)
    {
      if(' ' == supportedChars[u])
      {
        sequence[q] = u;
      }
    } 
  }
  
  for(int w = displays; w < rawSeq.length() + displays; w++)
  {
    for(int u = 0; u < (sizeof(supportedChars)/sizeof(char)); u++)
    {
      if(rawSeq.charAt(w - displays) == supportedChars[u])
      {
        sequence[w] = u;
      }
    }
  }
  
  for(int e = rawSeq.length() + displays; e < rawSeq.length() + displays + displays; e++)
  {
    for(int u = 0; u < (sizeof(supportedChars)/sizeof(char)); u++)
    {
      if(' ' == supportedChars[u])
      {
        sequence[e] = u;
      }
    }
  }
  
  Serial.println(F("The parsed sequence is: "));
  
  for(int t = 0; t < /*(sizeof(sequence)/sizeof(int))*/rawSeq.length() + displays + displays; t++)
  {
    Serial.print(sequence[t]);
    Serial.print(", ");
  }
  
  //sequence = parsedSequence; 
}

int* sequenceParsing(String rawSeq, int displays, int length)
{
  int parsedSequence[displays + length + displays];
  
  for(int q = 0; q < displays; q++)
  {
    for(int u = 0; u < (sizeof(supportedChars)/sizeof(char)); u++)
    {
      if(' ' == supportedChars[u])
      {
        parsedSequence[q] = u;
      }
    } 
  }
  
  for(int w = displays; w < rawSeq.length() + displays; w++)
  {
    for(int u = 0; u < (sizeof(supportedChars)/sizeof(char)); u++)
    {
      if(rawSeq.charAt(w - displays) == supportedChars[u])
      {
        parsedSequence[w] = u;
      }
    }
  }
  
  for(int e = rawSeq.length() + displays; e < rawSeq.length() + displays + displays; e++)
  {
    for(int u = 0; u < (sizeof(supportedChars)/sizeof(char)); u++)
    {
      if(' ' == supportedChars[u])
      {
        parsedSequence[e] = u;
      }
    }
  }
  
  Serial.println(F("The parsed sequence is: "));
  
  for(int t = 0; t < (sizeof(parsedSequence)/sizeof(int)); t++)
  {
    Serial.print(parsedSequence[t]);
    Serial.print(", ");
  }
  
  sequence = parsedSequence;
  
  //DEBUG:
  Serial.println(F("The parsed debug sequence is: "));
  for(int t = 0; t < (sizeof(parsedSequence)/sizeof(int)); t++)
  {
    Serial.print(sequence[t]);
    Serial.print(", ");
  }
  //:DEBUG
  
  return parsedSequence;
}

String sequenceSetup()
{
  Serial.println();
  Serial.println(F("All letters are supported. Numbers are not supported. Letters will be displayed in all caps."));
  Serial.print(F("Enter the sequence you wish to display on the Dot Matrix: "));
  
  clearSerial();
  
  String rawSeq;
  char tempChar;
  
  while(true)
  {
    if(Serial.available() > 0)
    {
      tempChar = Serial.read();
      
      if(tempChar == '\n' || tempChar == '\r' || tempChar == ';')
      {
        break; 
      }
      
      rawSeq += tempChar;
    }
  }
  
  rawSeq.toUpperCase();
  
  Serial.println(rawSeq);
  
  int counter = 0;
  boolean legalTest = true;
  
  for(int u = 0; u < rawSeq.length(); u++)
  {
     for(int h = 0; h < (sizeof(supportedChars)/sizeof(char)); h++)
     {
       if(rawSeq.charAt(u) == supportedChars[h])
       {
         counter++;
       }
     }
     
     if(counter != 1 && counter != 2)
     {
       Serial.print(rawSeq.charAt(u));
       Serial.println(F(" is not supported."));
       legalTest = false;
     }
     counter = 0;
  }
  
  if(legalTest == true)
  {
    Serial.println(F("All characters entered are supported. Continuing setup..."));
    return rawSeq;
  }
  
  Serial.println(F("Please try again."));
  return ">>>>>>>>";
}

int displaySetup()
{
  clearSerial();
  
  Serial.println();
  Serial.println(F("How many screens do you wish to use? Enter a number."));
  Serial.println(F("Ex: If you want to use 4 screens, enter 4."));
  
  while(Serial.available() <= 0){}
  
  int temp = Serial.parseInt();

  Serial.print(temp);
  Serial.println(F(" screens will be used."));
  
  return temp;
}

int fpsSetup()
{
  clearSerial();
  
  Serial.println(F("\n"));
  Serial.println(F("What do you want the FPS to be? Enter a number."));
  Serial.println(F("Hint: If you choose something too low, you see the refreshes."));
  Serial.println(F("Hint: If you don't know what you are doing, choose something between 75 and 100."));
  
  while(Serial.available() <= 0){}
  
  int temp = Serial.parseInt();
  
  Serial.print(F("The FPS will be set to: "));
  Serial.println(temp);
  
  return temp;
}

int cyclesSetup(int FPS)
{
  Serial.println();
  Serial.println(F("How many cycles do you want each fram to appear for?  Enter a number."));
  Serial.print(F("Hint: This is basically the speed. If you set the FPS to 75, having 75"));
  Serial.println(F(" cycles would mean that each letter is on the screen for 1 second. (cycles/fps)"));
  
  clearSerial();
  
  while(Serial.available() <= 0){}
  
  int temp = Serial.parseInt();

  Serial.print(F("Each frame will be shown for "));
  Serial.print(temp);
  Serial.println(F(" cycles."));
  
  Serial.print(F("Each letter will be on a screen for "));
  Serial.print( temp / FPS );
  Serial.println(F(" seconds."));
  
  return temp;
}

boolean scrollingSetup()
{
  clearSerial();
  
  Serial.println();
  Serial.println(F("Last question: Do you want the letters to scroll?"));
  Serial.println(F("Enter 'Y' for yes and anything else for no."));
  
  while (Serial.available() <= 0){}

  boolean scroll;
  
  char temp = Serial.read();
  
  //temp = Serial.read();

  if(temp == 'Y' || temp == 'y')
  {
    scroll = true;
    Serial.println(F("The letters will scroll.")); //THIS IS THE ISSUE LINE. WHAT?!?! THIS COMPILER...
  }

  if(temp != 'Y' && temp != 'y')
  {
    scroll = false;
    Serial.println(F("The letters will not scroll.")); 
  }

  return scroll; 
}

void writeOptions()
{
    //sequence = Tsequence;
//    for(int t = 0; t < Tlength + Tdisplays; t++)
//    {
//      sequence[t] = Tsequence[t];
//    }
    length = Tlength;
    displays = Tdisplays;
    fps = TFPS;
    cycles = Tcycles;
    scrolling = Tscrolling;
}

void printDataTable(String SsequencePrelim, int * STsequence, int STlength, int STcycles, boolean STscrolling, int STdisplays, int STFPS)
{
  Serial.println();
  Serial.println(F("Setup Summary:"));
  
  Serial.print(F("Sequence:        "));
  Serial.println(SsequencePrelim);
  
  Serial.print(F("Parsed Sequence: "));
  for(int t = 0; t < STlength + STdisplays; t++)
  {
    Serial.print(sequence[t]);
    Serial.print(", ");
  }
  Serial.println();
  
  Serial.print(F("Length:          "));
  Serial.println(STlength);
  
  Serial.print(F("Cycles:          "));
  Serial.println(STcycles);
  
  Serial.print(F("Scrolling:       "));
  Serial.println(STscrolling);
  
  Serial.print(F("Displays:        "));
  Serial.println(STdisplays);
  
  Serial.print(F("FPS:             "));
  Serial.println(STFPS);
}

void EERead()
{
  //Code to populate the "option"/feature variables from the EEPROM
//  int Tlength = lengthSetup(sequencePrelim);
//  
//  int Tdisplays = displaySetup();
//  
//  int *parsedSequence = sequenceParsing(sequencePrelim, Tdisplays, Tlength);
//  
//  int TFPS = fpsSetup();
//  
//  int Tcycles = cyclesSetup(TFPS);
//
//  boolean Tscrolling = scrollingSetup();
}

void EEWrite()
{
  //Code to populate the EEPROM with values from the "option"/feature variables
  //This should be done directly after the values are set using the config thing.
//  int Tlength = lengthSetup(sequencePrelim);
//  
//  int Tdisplays = displaySetup();
//  
//  int *parsedSequence = sequenceParsing(sequencePrelim, Tdisplays, Tlength);
//  
//  int TFPS = fpsSetup();
//  
//  int Tcycles = cyclesSetup(TFPS);
//
//  boolean Tscrolling = scrollingSetup();
}
