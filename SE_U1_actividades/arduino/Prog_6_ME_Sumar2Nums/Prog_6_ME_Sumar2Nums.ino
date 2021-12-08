//Calcular la suma de dos numeros ingresados por el usuario


//Variables
int dato;
int suma;

int estado;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  estado = 0;
  suma = 0;
}




void loop() {
  // put your main code here, to run repeatedly:

  switch (estado) {
    case 0:
      Serial.println("Ingresa un número");
      estado = 1;
      break;
    case 1:
    case 3:
      if (Serial.available() > 0) {
        dato = Serial.readString().toInt();

        if (estado == 1) {
          //Serial.println("Estado 1");
          suma = dato;
          estado = 2;
        } else {
          //Serial.println("Estado 3");
          suma += dato;
          estado = 4;
        }


      }
      break;
    case 2:
      Serial.println("Ingresa otro numero");
      estado = 3;
      break;
    case 4:
      Serial.println("La suma es:" + String(suma));
      estado = 0;
      break;
    default:
      break;
  }

  //Tarea 15 (Programa): Promedio de 5 numeros
  //Tarea 16 (Programa): Factorial (Nota, sin ciclos adicionales (FOR, WHILE) al LOOP) n>= 1 && n <= 10
  //Tarea 17 (Programa): Fibonacci (Nota, sin ciclos adicionales (FOR, WHILE) al LOOP) n>= 1 && n <= 10
  //Tarea 18 (Programa): Potencia de un número (X a la Y)
  //Tarea 19 (Programa): Área de un Poligono Regular de 5 o más lados (Pedir lado del poligono y su apotema)
//  A = Perimetro(P) * Apotema / 2
  //    P = Lado * NumLadosPoligono
          //Tarea 20 (Programa): Punto Medio entre dos puntos
    //      P1 (X1, Y1)
      //    P2 (X2, Y2)

       // PMX = (X1 + X2) / 2
         //       PMY =  (Y1 + Y2) / 2


                       delay(100);

}
