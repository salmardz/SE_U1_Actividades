void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
dato = Serial.readString();

if(Serial.available()>0){
  dato = Serial.readString();// leer buffer

  Serial.printInt(dato);
  
}
delay(100);
}
