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

	Este codigo es de dominio publico y modificado por ultima vez el 6 de septiembre de 2018.


*/
#ifndef Mulita_h
#define Mulita_h

#include "Arduino.h"


class Mulita
{
public:


	Mulita();
    void atras(double distancia);
    void adelante(double distancia);
    void izquierda();
    void derecha();
    void izquierda(double grados);
    void derecha(double grados);
    void apagarMotores();
    void bajarFibron();
    void subirFibron();
    int medirDistancia();
	void MoverServo(int pos);
	void fin();


private:
	int _servo;
    /*int _a;
	int _b;
	int _c;
	int _d;
	int _e;
	int _f;
	int _g;
	int _h;*/
	int _i1;
	int _i2;
	int _i3;
	int _i4;
	int _d1;
	int _d2;
	int _d3;
	int _d4;
	int _pinecho;
	int _pintrigger;
	int _abajo;
	int _arriba;
	int _pasosPorGiro;

	int _retardo;
	int _distanciaCalculada;
	double _vuelta;
	int _tiempo;
	
	
  	
	void girarMotores(char mov, int i);
	
};

#endif