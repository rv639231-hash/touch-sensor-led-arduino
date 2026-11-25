// Touch Sensor se LED ON/OFF - TTP223 + Arduino UNO
const int touchPin = 2; // Touch sensor OUT -> D2
const int ledPin = 13;  // LED -> D13

int ledState = LOW;
int lastTouch = LOW;

void setup() {
  pinMode(touchPin, INPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, ledState);
}

void loop() {
  int touch = digitalRead(touchPin);
  // Touch hua toh LED ulta kar do
  if (touch == HIGH && lastTouch == LOW) {
    ledState = !ledState;
    digitalWrite(ledPin, ledState);
    delay(300); // ek touch = ek baar hi change
  }
  lastTouch = touch;
}
