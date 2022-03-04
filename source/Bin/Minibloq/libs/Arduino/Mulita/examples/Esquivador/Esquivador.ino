#include <Mulita.h>
/*
  Pin 11 conectar a IN4  Motor Izq
  Pin 10 conectar a IN3  Motor Izq
  Pin 9 conectar a IN2   Motor Izq
  Pin 8 conectar a IN1   Motor Izq
  Pin 7 conectar a IN4   Motor Der
  Pin 6 conectar a IN3   Motor Der
  Pin 5 conectar a IN2   Motor Der
  Pin 4 conectar a IN1   Motor Der
  Pin echo a 2 en arduino
  Pin trigger a 3 en arduino

*/

Mulita mulita;
void setup() {

}

void loop() {
  
  if (mulita.medirDistancia() < 10)
  {
    mulita.atras(5);
    mulita.izquierda(45);
  }
  else
  {
    mulita.adelante(1);
  }

}
