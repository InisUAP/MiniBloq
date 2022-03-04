#include <mbq.h>
#include <Mulita.h>
Mulita mulita;
void setup()
{}

void loop()
{

	initBoard();
	mulita.bajarFibron();
	
	//Cara
	for(unsigned int _i=0; _i<(unsigned int)(93); _i++)
	{
		mulita.adelante(1.2);
		
		mulita.izquierda(4);
		
	}
	mulita.subirFibron();
	
	mulita.izquierda(90);
	
	mulita.adelante(25.8);
	
	mulita.izquierda(90);
	
	mulita.adelante(4);
	
	mulita.izquierda(90);
	
	mulita.adelante(1.7);
	
	//Ojo derecho
	mulita.bajarFibron();
	
	for(unsigned int _i=0; _i<(unsigned int)(94); _i++)
	{
		mulita.adelante(0.15);
		
		mulita.derecha(4);
		
	}
	mulita.subirFibron();
	
	mulita.adelante(12);
	
	//Ojo Izquierdo
	mulita.bajarFibron();
	
	for(unsigned int _i=0; _i<(unsigned int)(94); _i++)
	{
		mulita.adelante(0.15);
		
		mulita.derecha(4);
		
	}
	mulita.subirFibron();
	
	mulita.adelante(1.5);
	
	mulita.izquierda(91);
	
	mulita.adelante(9.5);
	
	//Boca
	mulita.bajarFibron();
	
	for(unsigned int _i=0; _i<(unsigned int)(45); _i++)
	{
		mulita.adelante(0.52);
		
		mulita.izquierda(4);
		
	}
	mulita.subirFibron();
	
	mulita.derecha(90);
	
	mulita.adelante(5);
	
	delay(999999);
}
