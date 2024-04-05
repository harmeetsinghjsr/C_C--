#include <Servo.h>

const int soilSensorPin = A0;    // Soil moisture sensor connected to analog pin A0
const int ledPin = 13;           // LED connected to digital pin 13
const int lidServoPin = 8;       // Servo motor for lid connected to digital pin 8
const int bucketServoPin = 9;    // Servo motor for rotating buckets connected to digital pin 9
const int trigPin = 10;          // Ultrasonic sensor trigger pin
const int echoPin = 11;          // Ultrasonic sensor echo pin
const int conductorPin = 7;      // KY036 metal touch sensor connected to digital pin 7

int conductorValue;
Servo lidServo;     // Create a servo object for the lid
Servo bucketServo; // Create a servo object for rotating buckets

void setup() {
 pinMode(ledPin, OUTPUT);
 pinMode(lidServoPin, OUTPUT);
 pinMode(bucketServoPin, OUTPUT);
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 pinMode(conductorPin, INPUT);

 lidServo.attach(lidServoPin);      // Attach the lid servo to the specified pin
 bucketServo.attach(bucketServoPin); // Attach the bucket servo to the specified pin

 Serial.begin(9600);
}

float getDistanceUltrasonic() {
 digitalWrite(trigPin, LOW);
 delayMicroseconds(2);
 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin, LOW);
 float duration = pulseIn(echoPin, HIGH);
 float distance = duration * 0.0343 / 2; // Calculate distance in centimeters
 return distance;
}

void loop() {
 int soilMoisture = analogRead(soilSensorPin); // Read analog value from soil moisture sensor
 float ultrasonicDistance = getDistanceUltrasonic(); // Get distance from ultrasonic sensor
 conductorValue = digitalRead(conductorPin); // Read the value from the conductor sensor

 Serial.print("Soil Moisture: ");
 Serial.println(soilMoisture);
 Serial.print("Ultrasonic Distance: ");
 Serial.println(ultrasonicDistance);
 Serial.print("Conductor Sensor Value: ");
 Serial.println(conductorValue);

 int dryThreshold = 600;
 int dryThreshold1 = 700;

 if (ultrasonicDistance < 9) {
    delay(1000);
    if (soilMoisture > dryThreshold) {
      digitalWrite(ledPin, HIGH);
      lidServo.write(240);
      delay(1000);
      bucketServo.write(180);
    }
    if (conductorValue == HIGH) {
      lidServo.write(360);
      delay(1000);
      bucketServo.write(180);
    }
    if (soilMoisture < dryThreshold1) {
      digitalWrite(ledPin, HIGH);
      lidServo.write(240);
      delay(1000);
      bucketServo.write(0);
      delay(1000);
      bucketServo.write(180);
    }
    digitalWrite(ledPin, LOW);
    lidServo.write(180);
    bucketServo.write(180);
 }
 delay(1000);
}

