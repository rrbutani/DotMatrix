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

int outpin;
byte T[] = {B00000000,B00000000,B11100111,B11100111,B11100111,B11100111,B11100111,B11100111};
byte rowCount = B00000000;

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
    int x = 0;
  
    for(x = 0; x <=7; x++)
    {
      PORTB = B0001000;
      PORTD = rowCount;
      
      PORTB |= B0000001;
      
      PORTB = B0000100;
      
      //if(T[x] == 0)
      //{
      // PORTD = B00000000; 
      //}
      
      //if(T[x] != 0)
      {
        PORTD = T[x];
      }
      
      PORTB |= B0000001;
      delay(1000);
      rowCount += 32;
      //Serial.println(T[x], BIN);
      //Serial.println(x);
      //Serial.println();
      //Serial.println(T[0]);
      //Serial.println(T[1]);
      //delay(1000000000);
    }
  
}

