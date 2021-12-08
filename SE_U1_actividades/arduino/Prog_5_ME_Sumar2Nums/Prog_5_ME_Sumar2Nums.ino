//Calcular la suma de dos numeros ingresados por el usuario


//Variables
int dato;
int suma;
bool auxiliar;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  auxiliar = false;
  suma = 0;
}




void loop() {
  // put your main code here, to run repeatedly:
      

if(Serial.available()>0){
  Serial.println("Ingrese un numero");
    dato = Serial.readString().toInt(); //numero

    if(!auxiliar){
        suma = dato;
        auxiliar = true;
      }
     else {
        suma += dato;
        auxiliar = false;
        Serial.println(suma);
      }
  
  }

delay(100);
  
}
