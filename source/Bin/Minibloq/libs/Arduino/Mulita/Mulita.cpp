/*
  Librería para controlar al robot Mulita.
  Desarrollada por Guillermo M. Cortez Riffel para el proyecto de investigacion Robot Mulita de la Universidad Adventista del Plata, Entre Rios, Argentina.
  
  Equipo de investigacion:
  Octavio J. da Silva Gillig
  Guillermo M. Cortez Riffel
  Leandro Bazan
  Sebastian J. Calderon
  Julian U. da Silva Gillig
  Analia Girardi Barreau
  Rocio Learreta
  Mayco Chavez

  Este codigo es de dominio publico y modificado por ultima vez el 2 de agosto de 2023.


*/
/*
#include "Arduino.h"
#include "Mulita.h"


int _pasos[4][4] = {{1, 1, 0, 0}, {0, 1, 1, 0}, {0, 0, 1, 1}, {1, 0, 0, 1}};

Mulita::Mulita()
{
   _a = 11;
	 _b = 10;
	 _c = 9;
	 _d = 8;
	 _e = 7;
	 _f = 6;
	 _g = 5;
	 _h = 4;
	 _pinecho = 13;
	 _pintrigger = 12;
	 _abajo = 500;
	 _arriba = 700;

	 _retardo = 1700;
	 _distanciaCalculada;
	 _vuelta = 18.4;

  pinMode(_a,OUTPUT);
  pinMode(_b,OUTPUT);
  pinMode(_c,OUTPUT);
  pinMode(_d,OUTPUT);
  pinMode(_e,OUTPUT);
  pinMode(_f,OUTPUT);
  pinMode(_g,OUTPUT);
  pinMode(_h,OUTPUT);
  pinMode(_pinecho,INPUT);
  pinMode(_pintrigger,OUTPUT);

}
void Mulita::girarMotor(int uno, int dos, int tres, int cuatro, int i)         //Los motores giran en sentido horario
{
  digitalWrite(uno, _pasos[i][0]);
  digitalWrite(dos, _pasos[i][1]);
  digitalWrite(tres, _pasos[i][2]);
  digitalWrite(cuatro, _pasos[i][3]);
}


void Mulita::atras(double distancia)
{

  for (int j = 0; j < ((distancia / _vuelta) * 512); j++) {
    for (int i = 0; i < 4; i++) {
      digitalWrite(_a, _pasos[i][0]);
      digitalWrite(_h, _pasos[i][0]);
      digitalWrite(_b, _pasos[i][1]);
      digitalWrite(_g, _pasos[i][1]);
      digitalWrite(_c, _pasos[i][2]);
      digitalWrite(_f, _pasos[i][2]);
      digitalWrite(_d, _pasos[i][3]);
      digitalWrite(_e, _pasos[i][3]);
      delayMicroseconds(_retardo);
    }
  }
  parar();
}

void Mulita::adelante(double distancia) 
{
  for (int j = 0; j < ((distancia / _vuelta) * 512); j++) {
    for (int i = 3; i > -1; i--) {
      digitalWrite(_a, _pasos[i][0]);
      digitalWrite(_h, _pasos[i][0]);
      digitalWrite(_b, _pasos[i][1]);
      digitalWrite(_g, _pasos[i][1]);
      digitalWrite(_c, _pasos[i][2]);
      digitalWrite(_f, _pasos[i][2]);
      digitalWrite(_d, _pasos[i][3]);
      digitalWrite(_e, _pasos[i][3]);
      delayMicroseconds(_retardo);

    }
  }
  parar();
}

void Mulita::izquierda()                                                    // La mulita realiza giro hacia la izquierda-- 263 pasos = 90°
{
  for (int j = 0; j < 280; j++) {
    for (int i = 0; i < 4; i++) {
      girarMotor(_e, _f, _g, _h, i);
      girarMotor(_a, _b, _c, _d, i);
      delayMicroseconds(_retardo);

    }
  }
  parar();
}

void Mulita::derecha()                                                      // La mulita realiza giro hacia la izquierda
{

  for (int j = 0; j < 280; j++) {
    for (int i = 0; i < 4; i++) {
      girarMotor(_h, _g, _f, _e, i);
      girarMotor(_d, _c, _b, _a, i);
      delayMicroseconds(_retardo);

    }
  }
  parar();
}

void  Mulita::izquierda(int grados)                                                    // La mulita realiza giro hacia la izquierda
{
  for (int j = 0; j < 2.98 *grados ; j++) {
    for (int i = 0; i < 4; i++) {
      girarMotor(_e, _f, _g, _h, i);
      girarMotor(_a, _b, _c, _d, i);
      delayMicroseconds(_retardo);

    }
  }
}

void Mulita::derecha(int grados)                                                      // La mulita realiza giro hacia la izquierda
{
  for (int j = 0; j < 2.98*grados ; j++) {
    for (int i = 0; i < 4; i++) {
      girarMotor(_h, _g, _f, _e, i);
      girarMotor(_d, _c, _b, _a, i);
      delayMicroseconds(_retardo);

    }
  }
}

void Mulita::parar()
{
  digitalWrite(_a, LOW);
  digitalWrite(_b, LOW);
  digitalWrite(_c, LOW);
  digitalWrite(_d, LOW);
  digitalWrite(_e, LOW);
  digitalWrite(_f, LOW);
  digitalWrite(_g, LOW);
  digitalWrite(_h, LOW);
}

void Mulita::subirFibron()
{
  MoverServo(_arriba);
}

void Mulita::bajarFibron()
{
  MoverServo(_abajo);
}

int Mulita::medirDistancia()
{
  digitalWrite(_pintrigger,LOW);
  delayMicroseconds(2);
  digitalWrite(_pintrigger,HIGH);
  delayMicroseconds(10);
  digitalWrite(_pintrigger,LOW);
  _tiempo = pulseIn(_pinecho,HIGH);
  _distanciaCalculada = _tiempo / 58;
  return _distanciaCalculada;
}

void Mulita::MoverServo(int pos){
  for(int i = 0; i < 50; i++){
    digitalWrite(_servo, HIGH);
    delayMicroseconds(pos);
    digitalWrite(_servo, LOW);
    delayMicroseconds(20000-pos);
  }
}*/

#include "Arduino.h"
#include "Mulita.h"

int _pasos[8][4] = {
  {1, 0, 0, 0},
  {1, 1, 0, 0},
  {0, 1, 0, 0},
  {0, 1, 1, 0},
  {0, 0, 1, 0},
  {0, 0, 1, 1},
  {0, 0, 0, 1},
  {1, 0, 0, 1}
};

Mulita::Mulita()
{
   _d4 = 11;
	 _d3 = 10;
	 _d2= 9;
	 _d1 = 8;
	 _i4 = 7;
	 _i3 = 6;
	 _i2 = 5;
	 _i1 = 4;
	 _pinecho = 3;
	 _pintrigger = 2;
	 _abajo = 500;
	 _arriba = 700;
   //_pasosPorGiro = 4100;
   _pasosPorGiro = 4080;
   _servo = 12;

	 _retardo = 1500;
	 _distanciaCalculada;
   _vuelta = 19.289;
	 //_vuelta = 18.4;  //Circunferencia validada con 3 giros completos de la rueda midiendo un total de 552 mm / 3 giros = 184 mm.


  pinMode(_d1,OUTPUT);
  pinMode(_d2,OUTPUT);
  pinMode(_d3,OUTPUT);
  pinMode(_d4,OUTPUT);
  pinMode(_i1,OUTPUT);
  pinMode(_i2,OUTPUT);
  pinMode(_i3,OUTPUT);
  pinMode(_i4,OUTPUT);
  pinMode(_pinecho,INPUT);
  pinMode(_pintrigger,OUTPUT);
  pinMode(_servo, OUTPUT);

}
//Permite mover los motores dentro de un ciclo for utilizando una variable, porEj.: int i , pasada por parametros como la variable del loop. Ademas el char para distinguir el tipo de movimiento.
void Mulita::girarMotores(char mov, int i)         //Los motores giran en sentido horario
{
  switch (mov)
  {
  case 'A':                               //Adelante
    digitalWrite(_i1, _pasos[i][3]);
    digitalWrite(_d4, _pasos[i][3]);
    digitalWrite(_i2, _pasos[i][2]);
    digitalWrite(_d3, _pasos[i][2]);
    digitalWrite(_i3, _pasos[i][1]);
    digitalWrite(_d2, _pasos[i][1]);
    digitalWrite(_i4, _pasos[i][0]);
    digitalWrite(_d1, _pasos[i][0]);
    break;
  case 'a':                               //atras
    digitalWrite(_i1, _pasos[i][0]);
    digitalWrite(_d4, _pasos[i][0]);
    digitalWrite(_i2, _pasos[i][1]);
    digitalWrite(_d3, _pasos[i][1]);
    digitalWrite(_i3, _pasos[i][2]);
    digitalWrite(_d2, _pasos[i][2]);
    digitalWrite(_i4, _pasos[i][3]);
    digitalWrite(_d1, _pasos[i][3]);
  break;
  case 'i':                               //Izquierda
    digitalWrite(_i1, _pasos[i][0]);
    digitalWrite(_d1, _pasos[i][0]);
    digitalWrite(_i2, _pasos[i][1]);
    digitalWrite(_d2, _pasos[i][1]);
    digitalWrite(_i3, _pasos[i][2]);
    digitalWrite(_d3, _pasos[i][2]);
    digitalWrite(_i4, _pasos[i][3]);
    digitalWrite(_d4, _pasos[i][3]);
  break;
  case 'd':                               //Derecha
    digitalWrite(_i1, _pasos[i][3]);
    digitalWrite(_d1, _pasos[i][3]);
    digitalWrite(_i2, _pasos[i][2]);
    digitalWrite(_d2, _pasos[i][2]);
    digitalWrite(_i3, _pasos[i][1]);
    digitalWrite(_d3, _pasos[i][1]);
    digitalWrite(_i4, _pasos[i][0]);
    digitalWrite(_d4, _pasos[i][0]);
  break;
  }
  delayMicroseconds(_retardo);

}


void Mulita::adelante(double distancia) 
{
  int i = 0;
  for (int j = 0; j < ((distancia / _vuelta) * _pasosPorGiro); j++) {
    girarMotores('A', i);  
    i++;
    if(i == 8){
      i = 0;
    } 
  }
  apagarMotores();
}

void Mulita::atras(double distancia)
{
  int i = 0;
  for (int j = 0; j < ((distancia / _vuelta) * _pasosPorGiro); j++) {
    girarMotores('a', i);  
    i++;
    if(i == 8){
      i = 0;
    } 
  }
  apagarMotores();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// La mulita realiza un giro completo (no de una rueda si no la combinacion de las dos) con 8940 pasos en modo half step. 1° = 24.83 pasos //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Mulita::izquierda(double grados)                                                    
{
  int i = 0;
  for (int j = 0; j < (grados * 23.027); j++) {
    girarMotores('i', i);  
    i++;
    if(i == 8){

      i = 0;
    } 
  }
  apagarMotores();
}

void Mulita::giros()
{
  int i = 0;
  for (int j = 0; j < (_pasosPorGiro); j++) {
    girarMotores('A', i);  
    i++;
    if(i == 8){
      i = 0;
    } 
  }
  apagarMotores();
}

void Mulita::derecha(double grados)                                                      
{
  int i = 0;
  for (int j = 0; j < (grados * 23.027); j++) {
    girarMotores('d', i);  
    i++;
    if(i == 8){
      i = 0;
    } 
  }
  apagarMotores();
}

void  Mulita::izquierda()                                                    // La mulita realiza giro hacia la izquierda
{
  
}

void Mulita::derecha()                                                      // La mulita realiza giro hacia la izquierda
{
  
}

void Mulita::apagarMotores()
{
  digitalWrite(_i1, LOW);
  digitalWrite(_i2, LOW);
  digitalWrite(_i3, LOW);
  digitalWrite(_i4, LOW);
  digitalWrite(_d1, LOW);
  digitalWrite(_d2, LOW);
  digitalWrite(_d3, LOW);
  digitalWrite(_d4, LOW);
  
}

void Mulita::subirFibron()
{
  MoverServo(_arriba);
}

void Mulita::bajarFibron()
{
  MoverServo(_abajo);
}

int Mulita::medirDistancia()
{
  digitalWrite(_pintrigger,LOW);
  delayMicroseconds(2);
  digitalWrite(_pintrigger,HIGH);
  delayMicroseconds(10);
  digitalWrite(_pintrigger,LOW);
  _tiempo = pulseIn(_pinecho,HIGH);
  _distanciaCalculada = _tiempo / 58;
  //Es preferible que la distancia sea un poco menor por eso se reduce un 1%.
  _distanciaCalculada = _distanciaCalculada * 0.99;
  return _distanciaCalculada;
}

void Mulita::MoverServo(int pos){
  for(int i = 0; i < 50; i++){
    digitalWrite(_servo, HIGH);
    delayMicroseconds(pos);
    digitalWrite(_servo, LOW);
    delayMicroseconds(20000-pos);
  }
}

void Mulita::fin(){
  delay(3600000);
}