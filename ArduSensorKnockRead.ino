/* ArduSensor Force Read

Reads the ArduSensor Knock, and will print out a small number every time it
senses vibration.  Make sure to tape (using Scotch tape) the piezo disk to a
desk.

Qtechknow kits required:
  ArduSensor Knock
  
made on 30 May 13
created by Quin (Qtechknow)
*/

int ArduSensorValue;   // variable to store the value of the ArduSensor Knock

void setup() {
  Serial.begin(9600);  // start Serial communication at 9600 baud
}

void loop() {
  // assign the variable to the value of the ArduSensor Knock
  ArduSensorValue=analogRead(0);
  
  Serial.println(val);  // print the value on the Serial monitor
  delay(100);
}
