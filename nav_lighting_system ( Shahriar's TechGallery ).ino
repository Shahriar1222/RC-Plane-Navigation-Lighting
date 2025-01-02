// Rc plane navigation lights
//Youtube: Shahriar's TechGallery, STG Crazy, 1M RC 
int Receiver = 2;
//int Receiver1 = 8;  // Digital pin for pwm signal
int beaconLed = 6;    // Digital pin for tail lights (blink)
int strobeLed = 3;    // Digital pin for strobe wing lights (blink twice)
int positionLedR = 4; // Digital pin for red position light
int landingLed = 7;   // Digital pin for landing lights (continuous)
int positionLedG = 5; // Digital pin for green position light
int strobeLedwl = 9;
int strobeLedwr = 10;
void setup() {
  pinMode(Receiver, INPUT);
 // pinMode(Receiver1, INPUT);
  pinMode(beaconLed, OUTPUT);
  pinMode(strobeLed, OUTPUT);
  pinMode(positionLedR, OUTPUT);
  pinMode(positionLedG, OUTPUT);
  pinMode(landingLed, OUTPUT);
  pinMode(strobeLedwl, OUTPUT);
  pinMode(strobeLedwr, OUTPUT);
}
void loop() {
  //int pwm1 = pulseIn(Receiver, HIGH, 25000);  // Read PWM signal with a timeout of 25ms
  int pwm = pulseIn(Receiver, HIGH, 25000);
  //if (pwm1 >1100 && pwm1 < 1700)
  if (pwm >1100 && pwm < 1700)     // Lights ON mode
  {
    digitalWrite(landingLed, LOW);
    digitalWrite(positionLedR, HIGH);
    digitalWrite(positionLedG, HIGH);
    digitalWrite(beaconLed, HIGH);
    delay(100);
    digitalWrite(beaconLed, LOW);
    delay(150);
    digitalWrite(strobeLed, HIGH);
    delay(100);
    digitalWrite(strobeLed, LOW);
    delay(100);
    digitalWrite(strobeLed, HIGH);
    delay(100);
    digitalWrite(strobeLed, LOW);
    delay(1000);
     digitalWrite(strobeLedwl, HIGH);
    delay(100);
    digitalWrite(strobeLedwl, LOW);
    delay(100);
    digitalWrite(strobeLedwr, HIGH);
    delay(100);
    digitalWrite(strobeLedwr, LOW);
    delay(1000);
  }
  else if (pwm >= 1700)            // Landing Lights mode
  {
    digitalWrite(landingLed, HIGH);  
    digitalWrite(positionLedR, HIGH);
    digitalWrite(positionLedG, HIGH);
    digitalWrite(beaconLed, HIGH);
    delay(100);
    digitalWrite(beaconLed, LOW);
    delay(150);
    digitalWrite(strobeLed, HIGH);
    delay(100);
    digitalWrite(strobeLed, LOW);
    delay(100);
    digitalWrite(strobeLed, HIGH);
    delay(100);
    digitalWrite(strobeLed, LOW);
    delay(1000);
    digitalWrite(strobeLedwl, HIGH);
    delay(100);
    digitalWrite(strobeLedwl, LOW);
    delay(100);
    digitalWrite(strobeLedwr, HIGH);
    delay(100);
    digitalWrite(strobeLedwr, LOW);
    delay(1000);
  }
  else                             // Lights OFF mode
  {
    digitalWrite(beaconLed, LOW);
    digitalWrite(strobeLed, LOW);
    digitalWrite(positionLedR, LOW);
    digitalWrite(positionLedG, LOW);;
    digitalWrite(landingLed, LOW);
    digitalWrite(strobeLedwl, LOW);
    digitalWrite(strobeLedwr, LOW);
  }
}
