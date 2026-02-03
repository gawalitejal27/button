int buttonPin = 2;     // Push button on D2
int ledPin = 13;      // LED on D13
int count = 0;
int lastButtonState = 0;// last button code 



void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Push Button Counter Started");


}




void loop() {



  int buttonState = digitalRead(buttonPin);
  
  if (buttonState == HIGH && lastButtonState == LOW) {
    count++;
    Serial.print("Count = ");
    Serial.println(count);
    digitalWrite(ledPin, HIGH);
    delay(250);
    digitalWrite(ledPin, LOW);
  }

  lastButtonState = buttonState;
  //button sss
}
