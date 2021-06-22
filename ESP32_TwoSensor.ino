int analogPin1= 0;
int analogPin2= 1;
int raw1= 0;
int raw2= 0;
int Vin= 5;
float Vout= 0;
float R1= 500;
float R2= 500;
float Rout = 0;
float buffer= 0;
​
void setup()
{
Serial.begin(9600);
Serial.println();
Serial.println("Date & Time, Resistance One, Resistance Two");
}
​
void loop(){
raw1= analogRead(analogPin1);
raw2= analogRead(analogPin2);
Serial.print(",");
if(raw1){
  buffer= raw1 * Vin;
  Vout= (buffer)/1024.0;
  buffer= (Vin/Vout) -1;
  Rout= R1 * buffer;
//Serial.print("Vout: ");
//Serial.println(Vout);
//Serial.print("R2: ");
  Serial.print(Rout);
  //delay(500);
}
Serial.print(",");
if(raw2){
  buffer= raw2 * Vin;
  Vout= (buffer)/1024.0;
  buffer= (Vin/Vout) -1;
  Rout = R2 * buffer;
//Serial.print("Vout: ");
//Serial.println(Vout);
//Serial.print("R2: ");
  Serial.println(Rout);
  delay(500);
}
}
