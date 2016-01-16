#define bus0  0 
#define bus1  1
#define bus2  2
#define bus3  3
#define bus4  4
#define bus5  5
#define bus6  6
#define bus7  7

#define bus5 5 
#define bus6 6
#define bus7 7

#define clock 8
#define dec1 9
#define dec2 10
#define dec3 11

int outpin;
int debug = 2;

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
//  digitalWrite(bus5, HIGH); 
//  digitalWrite(bus6, HIGH);
//  digitalWrite(bus7, HIGH);
//
//
//  digitalWrite(clock, HIGH);

    
        //select row register
        digitalWrite(clock, HIGH);
        
        digitalWrite(dec1, LOW);   //001
        digitalWrite(dec2, LOW);   //001
        digitalWrite(dec3, HIGH);  //001 = Row Register
        
        //tell row register to select row 1
        digitalWrite(bus5, LOW);  //000
        digitalWrite(bus6, LOW);  //000
        digitalWrite(bus7, LOW);  //000 = Row 1
        
        //drop clock and raise clock
        //A way to think:
        //LOW means read values
        //HIGH means publish them
        digitalWrite(clock, LOW);
        digitalWrite(clock, HIGH);
        
        delay(debug);
        
        //tell row register to select row 2
        digitalWrite(bus5, LOW);  //001
        digitalWrite(bus6, LOW);  //001
        digitalWrite(bus7, HIGH); //001 = Row 2
        
        //drop clock and raise clock
        //A way to think:
        //LOW means read values
        //HIGH means publish them
        digitalWrite(clock, LOW);
        digitalWrite(clock, HIGH);
        
        delay(debug);
        
        //tell row register to select row 3
        digitalWrite(bus5, LOW);  //010
        digitalWrite(bus6, HIGH);  //010
        digitalWrite(bus7, LOW); //010 = Row 3
        
        //drop clock and raise clock
        //A way to think:
        //LOW means read values
        //HIGH means publish them
        digitalWrite(clock, LOW);
        digitalWrite(clock, HIGH);
        delay(debug);
        
        //tell row register to select row 4
        digitalWrite(bus5, LOW);  //011
        digitalWrite(bus6, HIGH);  //011
        digitalWrite(bus7, HIGH); //011 = Row 4
        
        //drop clock and raise clock
        //A way to think:
        //LOW means read values
        //HIGH means publish them
        digitalWrite(clock, LOW);
        digitalWrite(clock, HIGH);
        delay(debug);
        
        //tell row register to select row 5
        digitalWrite(bus5, HIGH);  //100
        digitalWrite(bus6, LOW);  //100
        digitalWrite(bus7, LOW); //100 = Row 5
        
        //drop clock and raise clock
        //A way to think:
        //LOW means read values
        //HIGH means publish them
        digitalWrite(clock, LOW);
        digitalWrite(clock, HIGH);
        delay(debug);
        
        //tell row register to select row 6
        digitalWrite(bus5, HIGH);  //101
        digitalWrite(bus6, LOW);  //101
        digitalWrite(bus7, HIGH); //101 = Row 6
        
        //drop clock and raise clock
        //A way to think:
        //LOW means read values
        //HIGH means publish them
        digitalWrite(clock, LOW);
        digitalWrite(clock, HIGH);
        delay(debug);
        
        //tell row register to select row 7
        digitalWrite(bus5, HIGH);  //110
        digitalWrite(bus6, HIGH);  //110
        digitalWrite(bus7, LOW); //110 = Row 7
        
        //drop clock and raise clock
        //A way to think:
        //LOW means read values
        //HIGH means publish them
        digitalWrite(clock, LOW);
        digitalWrite(clock, HIGH);
        delay(debug);
        
        //tell row register to select row 8
        digitalWrite(bus5, HIGH);  //111
        digitalWrite(bus6, HIGH); //111
        digitalWrite(bus7, HIGH); //111 = Row 8
        
        //drop clock and raise clock
        //A way to think:
        //LOW means read values
        //HIGH means publish them
        digitalWrite(clock, LOW);
        digitalWrite(clock, HIGH);
        delay(debug);
        
        


}


