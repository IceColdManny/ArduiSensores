float tempC; 
int pinLM35 = 0;
 
void setup() {
  analogReference(INTERNAL);
  Serial.begin(9600);
}
 
void loop() {
  tempC = analogRead(pinLM35); 
  tempC = (1.1 * tempC * 100.0)/1024.0; 

  Serial.print(tempC);
  Serial.print("\n");
  delay(1000);
}
