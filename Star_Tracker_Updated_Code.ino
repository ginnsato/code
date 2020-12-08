const int buttonPins[ ] = {2,11};     // the numbers of the pushbutton pins
const int ledPins[ ] = {13,12,8,6,3}; // the numbers of LED pins
const int speakerPin = 10 ; 

int buttonState1 = 0;     
int buttonState2 = 0;
                              
int ifClicked = 0; //number of times button has been pressed

int val0 = LOW ;
int val1 = LOW ;
int val2 = LOW ;
int val3 = LOW ;
int val4 = LOW ;

unsigned long startMillis;  
unsigned long currentMillis;
const unsigned long period = 5000; 
  

void setup() {
  
  pinMode(ledPins[0], OUTPUT);
  pinMode(ledPins[1], OUTPUT);
  pinMode(ledPins[2], OUTPUT);
  pinMode(ledPins[3], OUTPUT);
  pinMode(ledPins[4], OUTPUT);
  
  pinMode(buttonPins[0], INPUT);
  pinMode(buttonPins[1], INPUT);
  
  pinMode(speakerPin, OUTPUT);
 
}

void loop() {
  // read the state of the pushbutton value:
  buttonState1 = digitalRead(buttonPins[0]);
  buttonState2 = digitalRead(buttonPins[1]);


  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState1 == HIGH ) {
    
    digitalWrite(ledPins[0], val0) ; 
    digitalWrite(ledPins[1], val1) ;
    digitalWrite(ledPins[2], val2) ;
    digitalWrite(ledPins[3], val3) ;
    digitalWrite(ledPins[4], val4) ;
    
    startMillis = millis();
 
    delay(250) ;
  
  }
  
  else if (buttonState2 == HIGH && ifClicked == 0 ) {
    
    digitalWrite(ledPins[0], HIGH) ; 
    digitalWrite(ledPins[1], LOW) ;
    digitalWrite(ledPins[2], LOW) ;
    digitalWrite(ledPins[3], LOW) ;
    digitalWrite(ledPins[4], LOW) ;
    
    val0 = HIGH ;
    val1 = LOW ;
    val2 = LOW ;
    val3 = LOW ;
    val4 = LOW ;
    
    startMillis = millis();
    
    ifClicked = 1; 
    
    delay(250) ;
    

  }
  
  else if (buttonState2 == HIGH && ifClicked == 1 ) {
    
    digitalWrite(ledPins[0], HIGH) ; 
    digitalWrite(ledPins[1], HIGH) ;
    digitalWrite(ledPins[2], LOW) ;
    digitalWrite(ledPins[3], LOW) ;
    digitalWrite(ledPins[4], LOW) ;
    
    val0 = HIGH ;
    val1 = HIGH ;
    val2 = LOW ;
    val3 = LOW ;
    val4 = LOW ;
    
    startMillis = millis();
    
    ifClicked = 2;
    
    delay(250) ;
    
  }
  else if (buttonState2 == HIGH && ifClicked == 2 ) {
    
    digitalWrite(ledPins[0], HIGH) ; 
    digitalWrite(ledPins[1], HIGH) ;
    digitalWrite(ledPins[2], HIGH) ;
    digitalWrite(ledPins[3], LOW) ;
    digitalWrite(ledPins[4], LOW) ;
    
    val0 = HIGH ;
    val1 = HIGH ;
    val2 = HIGH ;
    val3 = LOW ;
    val4 = LOW ;
    
    startMillis = millis();
  
    ifClicked = 3; 
    
    delay(250);
    

  }
  
  else if (buttonState2 == HIGH && ifClicked == 3) {
    
    digitalWrite(ledPins[0], HIGH) ; 
    digitalWrite(ledPins[1], HIGH) ;
    digitalWrite(ledPins[2], HIGH) ;
    digitalWrite(ledPins[3], HIGH) ;
    digitalWrite(ledPins[4], LOW) ;

    val0 = HIGH ;
    val1 = HIGH ;
    val2 = HIGH ;
    val3 = HIGH ;
    val4 = LOW ;
    
    startMillis = millis();
    
    ifClicked = 4 ;
    
    delay(250) ;
    
  }
  
  else if (buttonState2 == HIGH && ifClicked == 4 ) {
    
    digitalWrite(ledPins[0], HIGH) ; 
    digitalWrite(ledPins[1], HIGH) ;
    digitalWrite(ledPins[2], HIGH) ;
    digitalWrite(ledPins[3], HIGH) ;
    digitalWrite(ledPins[4], HIGH) ;

    val0 = HIGH ;
    val1 = HIGH ;
    val2 = HIGH ;
    val3 = HIGH ;
    val4 = HIGH ;
    
    startMillis = millis();
    
    ifClicked = 5 ;
    
    delay(250) ;
    
    digitalWrite(ledPins[0], HIGH); 
    digitalWrite(ledPins[1], LOW);
    digitalWrite(ledPins[2], LOW);
    digitalWrite(ledPins[3], LOW);
    digitalWrite(ledPins[4], LOW);
    play ('a',1) ;
    delay(100) ;
     
    digitalWrite(ledPins[0], LOW); 
    digitalWrite(ledPins[1], HIGH);
    digitalWrite(ledPins[2], LOW);
    digitalWrite(ledPins[3], LOW);
    digitalWrite(ledPins[4], LOW);
    play ('b',1) ;
    delay(100) ;
    
    digitalWrite(ledPins[0], LOW); 
    digitalWrite(ledPins[1], LOW);
    digitalWrite(ledPins[2], HIGH);
    digitalWrite(ledPins[3], LOW);
    digitalWrite(ledPins[4], LOW);
    play ('c',1) ;
    delay(100) ;
    
    digitalWrite(ledPins[0], LOW); 
    digitalWrite(ledPins[1], LOW);
    digitalWrite(ledPins[2], LOW);
    digitalWrite(ledPins[3], HIGH);
    digitalWrite(ledPins[4], LOW);
    play ('d',1);
    delay(100) ;
    
    digitalWrite(ledPins[0], LOW); 
    digitalWrite(ledPins[1], LOW);
    digitalWrite(ledPins[2], LOW);
    digitalWrite(ledPins[3], LOW);
    digitalWrite(ledPins[4], HIGH);
    play ('e',1);
    delay(100) ;
    
    digitalWrite(ledPins[0], LOW); 
    digitalWrite(ledPins[1], LOW);
    digitalWrite(ledPins[2], LOW);
    digitalWrite(ledPins[3], HIGH);
    digitalWrite(ledPins[4], LOW);
    play ('d',1);
    delay(100) ;
    
    digitalWrite(ledPins[0], LOW); 
    digitalWrite(ledPins[1], LOW);
    digitalWrite(ledPins[2], HIGH);
    digitalWrite(ledPins[3], LOW);
    digitalWrite(ledPins[4], LOW);
    play ('c',1);
    delay(100) ;
    
    digitalWrite(ledPins[0], LOW); 
    digitalWrite(ledPins[1], HIGH);
    digitalWrite(ledPins[2], LOW);
    digitalWrite(ledPins[3], LOW);
    digitalWrite(ledPins[4], LOW);
    play ('b',1);
    delay(100) ;
    
    digitalWrite(ledPins[0], HIGH); 
    digitalWrite(ledPins[1], LOW);
    digitalWrite(ledPins[2], LOW);
    digitalWrite(ledPins[3], LOW);
    digitalWrite(ledPins[4], LOW);
    play ('a',1);
    delay(100) ;
    
    digitalWrite(ledPins[0], HIGH); 
    digitalWrite(ledPins[1], HIGH);
    digitalWrite(ledPins[2], LOW);
    digitalWrite(ledPins[3], LOW);
    digitalWrite(ledPins[4], LOW);
    play ('c',1);
    delay(100) ;
    
    digitalWrite(ledPins[0], HIGH); 
    digitalWrite(ledPins[1], HIGH);
    digitalWrite(ledPins[2], HIGH);
    digitalWrite(ledPins[3], LOW);
    digitalWrite(ledPins[4], LOW);
    play ('e',1);
    delay(100) ;
    
    digitalWrite(ledPins[0], HIGH); 
    digitalWrite(ledPins[1], HIGH);
    digitalWrite(ledPins[2], HIGH);
    digitalWrite(ledPins[3], HIGH);
    digitalWrite(ledPins[4], LOW);
    play ('g',1);
    delay(100) ;
    
    digitalWrite(ledPins[0], HIGH); 
    digitalWrite(ledPins[1], HIGH);
    digitalWrite(ledPins[2], HIGH);
    digitalWrite(ledPins[3], HIGH);
    digitalWrite(ledPins[4], HIGH);
    play ('G',2);
    delay(300) ;
    
    digitalWrite(ledPins[0], LOW); 
    digitalWrite(ledPins[1], LOW);
    digitalWrite(ledPins[2], LOW);
    digitalWrite(ledPins[3], LOW);
    digitalWrite(ledPins[4], LOW);
    play ('A',2);
    delay(200) ;
    
   
    digitalWrite(ledPins[0], HIGH) ; 
    digitalWrite(ledPins[1], LOW) ;
    digitalWrite(ledPins[2], HIGH) ;
    digitalWrite(ledPins[3], LOW) ;
    digitalWrite(ledPins[4], HIGH);
    delay(200) ;
    play ('F',1);
    play ('G',1);
    
    digitalWrite(ledPins[0], LOW) ; 
    digitalWrite(ledPins[1], HIGH) ;
    digitalWrite(ledPins[2], LOW) ;
    digitalWrite(ledPins[3], HIGH) ;
    digitalWrite(ledPins[4], LOW);
    play ('G',4);
    delay(200) ;
   
  }
  
  
  
  else if (buttonState2 == HIGH && ifClicked ==5) {
    
    digitalWrite(ledPins[0], LOW) ; 
    digitalWrite(ledPins[1], LOW) ;
    digitalWrite(ledPins[2], LOW) ;
    digitalWrite(ledPins[3], LOW) ;
    digitalWrite(ledPins[4], LOW);
    
    ifClicked = 0 ;
    
    delay(250);

  }

  currentMillis = millis();  
  
  if (currentMillis - startMillis >= period) {
    
    digitalWrite(ledPins[0], LOW) ; 
    digitalWrite(ledPins[1], LOW) ;
    digitalWrite(ledPins[2], LOW) ;
    digitalWrite(ledPins[3], LOW) ;
    digitalWrite(ledPins[4], LOW) ;
    currentMillis = startMillis ;

}

}





void play( char note, int beats)
{
  int numNotes = 14;  // number of notes in our note and frequency array (there are 15 values, but arrays start at 0)

  //Note: these notes are C major (there are no sharps or flats)

  //this array is used to look up the notes
  char notes[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C', 'D', 'E', 'F', 'G', 'A', 'B', ' '};
  //this array matches frequencies with each letter (e.g. the 4th note is 'f', the 4th frequency is 175)
  int frequencies[] = {131, 147, 165, 175, 196, 220, 247, 262, 294, 330, 349, 392, 440, 494, 0};

  int currentFrequency = 0;    //the frequency that we find when we look up a frequency in the arrays
  int beatLength = 100;   //the length of one beat (changing this will speed up or slow down the tempo of the song)

  //look up the frequency that corresponds to the note
  for (int i = 0; i < numNotes; i++)  // check each value in notes from 0 to 14
  {
    if (notes[i] == note)             // does the letter passed to the play function match the letter in the array?
    {
      currentFrequency = frequencies[i];   // Yes! Set the current frequency to match that note
    }
  }

  //play the frequency that matched our letter for the number of beats passed to the play function
  tone(speakerPin, currentFrequency, beats * beatLength);
  delay(beats * beatLength);  //wait for the length of the tone so that it has time to play
  delay(50);                  //a little delay between the notes makes the song sound more natural

}
