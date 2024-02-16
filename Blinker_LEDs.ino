  
 //Pins connected to the Arduino by components
  int LEDR = 3; 
  int LEDB = 4;
  int LEDG = 5;
  int LEDY = 6; 

// Button variables 
  int buttonPressed = 7;
  int buttonState = 0;

void setup() {

  pinMode (LEDR, OUTPUT);
  pinMode (LEDB, OUTPUT);
  pinMode (LEDG, OUTPUT);
  pinMode (LEDY, OUTPUT);
  pinMode (buttonPressed, INPUT);

}


void loop() {

  buttonState = digitalRead(buttonPressed); //States a definition for digitalRead 

  //This is what happends when the button is pressed 
  if (buttonState == HIGH) {
    digitalWrite(LEDR, HIGH);
    delay(100);
    digitalWrite(LEDB, HIGH);
    delay(100);
    digitalWrite(LEDG, HIGH);
    delay(100);
    digitalWrite(LEDY, HIGH);
    delay(100);
    digitalWrite(LEDR, LOW);
    digitalWrite(LEDB, LOW);
    digitalWrite(LEDG, LOW);
    digitalWrite(LEDY, LOW);
    delay(100); 
  }

  //What happens when the button is not being pressed 
  else {
    digitalWrite(LEDR, HIGH);
    delay(300);
    digitalWrite(LEDB, HIGH);
    delay(300);
    digitalWrite(LEDG, HIGH);
    delay(300);
    digitalWrite(LEDY, HIGH);
    delay(300);
    digitalWrite(LEDR, LOW);
    digitalWrite(LEDB, LOW);
    digitalWrite(LEDG, LOW);
    digitalWrite(LEDY, LOW);
    delay(300); 
    }
}
