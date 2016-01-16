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

void setup() {
  // use a for loop to initialize each pin as an output:
  for (outpin = 0; outpin <= 11; outpin++) { //make each column HIGH so no LED will eb turned on 
    pinMode(outpin, OUTPUT);
    //digitalWrite(outpin, LOW); // initialize all BUS ports
  }
  
  digitalWrite(clock, HIGH);
}  // setup

void loop() 
{
  
  PORTB = B0001000;   //select row register
  PORTD = B11100000;  //tell row register to select row 2
  
  PORTB |= B0000001; //This is what happens: 0001000 | 0000001 = 0001001
  
  //digitalWrite(clock, LOW);
  //digitalWrite(clock, HIGH);
  
  
  PORTB = B0000100;   //select Display 1 column register
  PORTD = T[3];  //Turn on LEDs
  
  PORTB |= B0000001; 
  
  //digitalWrite(clock, LOW);
  //digitalWrite(clock, HIGH);

  delay(100000);
  
  
  
  
}
