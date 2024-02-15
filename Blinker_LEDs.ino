  
 //Pins connected to the Arduino by components
  int LEDR = 4; 
  int LEDB = 5;
  int LEDG = 6;
  int LEDY = 7; 

// Button variables 
  int Button = 3;
  int buttonState = 0;

void setup() {

  pinMode (LEDR, OUTPUT);
  pinMode (LEDB, OUTPUT);
  pinMode (LEDG, OUTPUT);
  pinMode (LEDY, OUTPUT);
  pinMode (Button, INPUT);

}


void loop() {

  buttonState = digitalRead(Button); 

  if (buttonState == HIGH) {
    digitalWrite(LEDR, HIGH);
    delay(500);
    digitalWrite(LEDB, HIGH);
    delay(500);
    digitalWrite(LEDG, HIGH);
    delay(500);
    digitalWrite(LEDY, HIGH);
    delay(500);
  }
    else{
      digitalWrite(LEDR, LOW);
      digitalWrite(LEDB, LOW);
      digitalWrite(LEDG, LOW);
      digitalWrite(LEDY, LOW);
    }
}
