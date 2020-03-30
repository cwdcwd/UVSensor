/*
 * Project Cleaner
 * Description:
 * Author: CWD
 * Date: 20200330
 */

int sensorPin01=A0;
double analogvalue01=0;


// setup() runs once, when the device is first turned on.
void setup() {
  Serial.begin(9600);
  Serial.println("Starting up");
  Particle.variable("analogvalue01", &analogvalue01, DOUBLE);
  pinMode(sensorPin01, INPUT);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  analogvalue01 =  analogRead(sensorPin01);
  Serial.print("sensor reads: ");
  Serial.println(analogvalue01);
  delay(3000);
}