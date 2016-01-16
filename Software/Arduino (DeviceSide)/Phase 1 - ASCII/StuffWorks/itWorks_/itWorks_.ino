#define bus0  0 
#define bus1  1
#define bus2  2
#define bus3  3
#define bus4  4
#define bus5  5
#define bus6  6
#define bus7  7

#define rdec1 5 
#define rdec2 6
#define rdec3 7

#define clock 8
#define dec1 9
#define dec2 10
#define dec3 11

#define HA 13
/* UI Plans:
 * Three Questions:
 * 1) What letter(s)?
 * 2) What speed?
 * 3) Do you have OCD?
 */


int outpin;
byte T[] = {B00000000,B00000000,B11100111,B11100111,B11100111,B11100111,B11100111,B11100111};
byte H[] = {B00111100,B00111100,B00111100,B00000000,B00000000,B00111100,B00111100,B00111100};
byte E[] = {B10000001,B11111101,B11111101,B10000001,B10000001,B11111101,B11111101,B10000001};
byte O[] = {B11000011,B10111101,B01111110,B01111110,B01111110,B01111110,B10111101,B11000011};
byte Q[] = {B11000011,B10111101,B01111110,B01111110,B01111110,B01011110,B10111101,B01000011};
byte A[] = {B11100111,B11011011,B10111101,B10111101,B10000001,B10111101,B10111101,B10111101};
byte B[] = {B11000001,B10111101,B10111101,B10111101,B11000001,B10111101,B10111101,B11000001};
byte C[] = {B11000111,B10111011,B11111101,B11111101,B11111101,B11111101,B10111011,B11000111};
byte D[] = {B11000111,B10111101,B10111101,B10111101,B10111101,B10111101,B10111101,B11000111};
byte L[] = {B11111101,B11111101,B11111101,B11111101,B11111101,B11111101,B11111101,B10000001};
byte A_wide[]   = {B11100111,B11011011,B10111101,B01111110,B00000000,B01111110,B01111110,B01111110};
byte C_alt[]    = {B11000011,B10111101,B11111101,B11111101,B11111101,B11111101,B10111101,B11000011};
byte excl_alt[] = {B11100111,B11000011,B11000011,B11000011,B11000011,B11100111,B11111111,B11100111};
byte exclaim[]  = {B11100111,B11100111,B11100111,B11100111,B11100111,B11100111,B11111111,B11100111};
byte blank[]    = {B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111};

byte *masterArray[] = { A, B, C, E, H, L, T, exclaim, blank, O, D };
//masterArray[1] = A;
//masterArray[2] = B;
//masterArray[3] = C;

int sequence[] = {10};
int length = 0; //length of sequence for the loop (num of charcters minus one)
int s = 1;  //selector for the Master Array
int cycles = 75; //number of cycles (time) spent on each letter

int i;     //cycle loop incrementer
int x;     //row cycle incrementer for the inner for loop
byte rowCount = B00000000;
byte buffer;
int debug = 1; //OCD Tradeoff 

void setup() {
  // use a for loop to initialize each pin as an output:
  for (outpin = 0; outpin <= 11; outpin++) { //make each column HIGH so no LED will eb turned on 
    pinMode(outpin, OUTPUT);
    //digitalWrite(outpin, LOW); // initialize all BUS ports
  }
  DDRD = B11111111;
  //Serial.begin(9600);
  digitalWrite(clock, HIGH);
}  // setup

void loop() 
{
  
while(1)
{
  for(int f = 0; f <= length; f++)
  {
    s = sequence[f];
    
      for(i = 0; i <= cycles; i++)
      {
          x = 0;
          rowCount = B00000000;
        
              for(x = 0; x <=7; x++)
              {
                    if(masterArray[s][x] == buffer)
                    {
                      //ROW set
                      PORTB = B0001000;
                      PORTD = rowCount;;
                      PORTB |= B0000001;
                      
                      delay (debug);
                    }
                
                    if(masterArray[s][x] != buffer)
                    {
                      //set buffer
                      buffer = masterArray[s][x];
                      
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
                           
                           if( ( ( (~masterArray[s][x-1] ^ ~masterArray[s][x]) | ~masterArray[s][x]) ^ ~masterArray[s][x]) != 00000000)
                           {
                             //blank COL
                            PORTB = B0000100;
                            PORTD = B11111111;
                  
                            PORTB |= B0000001;
                          
                            //delay (debug);
                           }  

                      //ROW set
                      PORTB = B0001000;
                      PORTD = rowCount;
              
                      PORTB |= B0000001;
                      
                      //delay (debug); 
                      
                      //COL set
                      PORTB = B0000100;
                      PORTD = buffer;
                      
                      PORTB |= B0000001;
              
                      delay (debug);
                    
                  }
              
        //      //COL set
        //      PORTB = B0000100;
        //      PORTD = H[x];
        //
        //      PORTB |= B0000001;
        //      
        //      //ROW set
        //      PORTB = B0001000;
        //      PORTD = rowCount;
        //      
        //      PORTB |= B0000001;
        //      
              
              rowCount += 32;
            }
        
      }

  }
  
}
    
//    rowCount = B00000000;
//    
//    PORTB = B0001000;
//    PORTD = rowCount;
//      
//    PORTB |= B0000001;
 
}

