int led = 13;

void setup() {
  //Siempre que se vaya a trabajar con un pin digital es necesario ESTABLECER si este sera una entrada o una salida.
  // es entrada cuando nos proporcionará "informacion" (sensor), y es salida cuando generará algun "efecto" (actuador)

  //entrada -> INPUT
  //salida -> OUTPUT  <<<<<

  pinMode(led, OUTPUT); //establece el modo de trabajo del pin asociado a la variable LED como salida
  
}

void loop() {
  // put your main code here, to run repeatedly:
  // Cuando se trabaja con actuadores digitales se cuenta con la instruccion digitalWrite para establecer el valor del
  // actuador

  // valor = {prendido( 1 o HIGH) | apagado (0 o LOW)}

    digitalWrite(led, 1);
    //digitalWrite(led, HIGH);

    delay(500); //ms

    digitalWrite(led, 0);

    delay(500);
    
  
}
