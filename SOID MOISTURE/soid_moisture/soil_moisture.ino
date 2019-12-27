int sensorPin = A0;  // set A0: sensor input pin 
int moisture =0;     // store  value from the sensor

void setup() {
  Serial.begin(9600);
}

void loop() {
  // read value from the sensor
  int moisture = analogRead(sensorPin);
  Serial.print("Soil Moisture = ");
  Serial.println(moisture);
  
  if(analogRead(sensorPin)>1000){
    Serial.println("Sensor in Air");
  }
  if(analogRead(sensorPin)>800 && analogRead(sensorPin) <1000){
    Serial.println("Sensor in dry soil");
  }
  if(analogRead(sensorPin)>300 && analogRead(sensorPin) <800){
    Serial.println("Sensor in humid soil");
  }
  if(analogRead(sensorPin)<300){
    Serial.println("Sensor in humid water");
  }
  delay(500);
}
