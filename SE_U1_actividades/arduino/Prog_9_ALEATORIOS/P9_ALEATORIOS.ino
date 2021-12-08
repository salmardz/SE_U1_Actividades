
int led_1 = 10;
int led_2 = 11;
int led_3 = 12;
int led_4 = 13;

int led_prender; // 0, 1, 2, 3

void setup() {
  //Siempre que se vaya a trabajar con un pin digital es necesario ESTABLECER si este sera una entrada o una salida.
  // es entrada cuando nos proporcionará "informacion" (sensor), y es salida cuando generará algun "efecto" (actuador)

  //entrada -> INPUT
  //salida -> OUTPUT  <<<<<

  pinMode(led_1, OUTPUT); //establece el modo de trabajo del pin asociado a la variable LED como salida
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(led_4, OUTPUT);

  //randomSeed(6); //normalizada
  randomSeed(analogRead(A0)); //la semilla tendrá un valor entre 0 y 1023

}

void loop() {
  // put your main code here, to run repeatedly:
  // Cuando se trabaja con actuadores digitales se cuenta con la instruccion digitalWrite para establecer el valor del
  // actuador

  // valor = {prendido( 1 o HIGH) | apagado (0 o LOW)}

    digitalWrite(led_1,0);
    digitalWrite(led_2,0);
    digitalWrite(led_3,0);
    digitalWrite(led_4,0);

    led_prender = random(4); //[0 - (n-1)]
    //random(min, max)  [min - (max-1)]

    switch(led_prender){
      case 0:
      digitalWrite(led_1,1);
      break;
      case 1:
      digitalWrite(led_2,1);
      break;
      case 2:
      digitalWrite(led_3,1);
      break;
      case 3:
      digitalWrite(led_4,1);
      break;
      }

  delay(2000);
  
}
