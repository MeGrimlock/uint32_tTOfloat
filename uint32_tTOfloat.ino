/*
  AnalogReadSerial
  Reads an analog input on pin 0, prints the result to the serial monitor.
  Graphical representation is available using serial plotter (Tools > Serial Plotter menu)
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.
*/
int32_t latint =-34908753;
float latfloat;
char bufferlat [10];

void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.println("loop");
  latfloat = (float)latint/1000000;
  dtostrf(latfloat,10,6,bufferlat);
  sprintf("hola %s",bufferlat);
  Serial.println(bufferlat);
  delay(10000);        
}
