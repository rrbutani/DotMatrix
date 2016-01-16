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

void setup() {
  // use a for loop to initialize each pin as an output:
  for (outpin = 0; outpin <= 11; outpin++) { //make each column HIGH so no LED will eb turned on 
    pinMode(outpin, OUTPUT);
    //digitalWrite(outpin, LOW); // initialize all BUS ports
  }
  
  digitalWrite(clock, LOW);
}  // setup

void loop() {
//  //turing on firs row
//  digitalWrite(clock, LOW);
//
//  digitalWrite(dec1, LOW);
//  digitalWrite(dec2, LOW);
//  digitalWrite(dec3, LOW);
//
//  digitalWrite(rdec1, HIGH); 
//  digitalWrite(rdec2, HIGH);
//  digitalWrite(rdec3, HIGH);
//
//
//  digitalWrite(clock, HIGH);

    while(1)
    {
        digitalWrite(clock, HIGH);
        
        //select row register
        digitalWrite(dec1, LOW);   //001
        digitalWrite(dec2, LOW);   //001
        digitalWrite(dec3, HIGH);  //001 = Row Register
        
        //tell row register to select row 1
        digitalWrite(rdec1, LOW);  //000
        digitalWrite(rdec2, LOW);  //000
        digitalWrite(rdec3, LOW);  //000 = Row 1
        
        //drop clock and raise clock
        //A way to think:
        //LOW means read values
        //HIGH means publish them
        digitalWrite(clock, LOW);
        digitalWrite(clock, HIGH);
        
        //select Display 1 column register
        digitalWrite(dec1, LOW);   //010
        digitalWrite(dec2, HIGH);  //010
        digitalWrite(dec3, LOW);   //010 = Column Register
        
        //tell column register to select LEDs 1, 3, 5, and 7
        //0 is ON for these
        digitalWrite(bus0, LOW); //01010101
        digitalWrite(bus1, HIGH); //01010101
        digitalWrite(bus2, LOW); //01010101
        digitalWrite(bus3, HIGH); //01010101
        digitalWrite(bus4, LOW); //01010101
        digitalWrite(bus5, HIGH); //01010101
        digitalWrite(bus6, LOW); //01010101
        digitalWrite(bus7, HIGH); //01010101 = LED 1, 3, 5, 7 are ON
        
        //drop clock and raise clock
        //A way to think:
        //LOW means read values
        //HIGH means publish them
        digitalWrite(clock, LOW);
        digitalWrite(clock, HIGH);
        
        delay(10000000);
    }

  while (1) {
  }

}


