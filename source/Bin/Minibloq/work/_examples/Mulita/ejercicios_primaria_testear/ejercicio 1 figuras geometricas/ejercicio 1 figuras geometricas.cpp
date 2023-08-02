#include <mbq.h>
#include <Mulita.h>
Mulita mulita;
void setup()
{}

void loop()
{

	initBoard();
	float cuadrado = 10;
	float triangulo = 10;
	float circulo = 5;
	float condicion = 0;
	mulita.bajarFibron();
	
	for(unsigned int _i=0; _i<(unsigned int)(4); _i++)
	{
		mulita.adelante(cuadrado);
		
		mulita.izquierda(90);
		
	}
	mulita.subirFibron();
	
	mulita.derecha(90);
	
	mulita.adelante(5);
	
	mulita.bajarFibron();
	
	while((condicion<3))
	{
		mulita.adelante(triangulo);
		
		mulita.izquierda(60);
		
		condicion = (condicion+1);
	}
	mulita.subirFibron();
	
	mulita.adelante((triangulo+10));
	
	for(unsigned int _i=0; _i<(unsigned int)(31); _i++)
	{
		mulita.adelante(1);
		
		mulita.izquierda(11.6);
		
	}
	mulita.subirFibron();
	
	mulita.adelante(5);
	
}
