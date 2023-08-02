#include <mbq.h>
#include <Mulita.h>
Mulita mulita;
void setup()
{}

void loop()
{

	initBoard();
	mulita.bajarFibron();
	
	mulita.adelante(10);
	
	mulita.derecha(90);
	
	mulita.adelante(6);
	
	mulita.derecha(90);
	
	mulita.adelante(10);
	
	mulita.derecha(90);
	
	mulita.adelante(2);
	
	mulita.derecha(90);
	
	mulita.adelante(4);
	
	mulita.subirFibron();
	
	mulita.adelante(2);
	
	mulita.bajarFibron();
	
	for(unsigned int _i=0; _i<(unsigned int)(4); _i++)
	{
		mulita.izquierda(90);
		
		mulita.adelante(2);
		
	}
	mulita.subirFibron();
	
	mulita.adelante(2);
	
	mulita.derecha(90);
	
	mulita.bajarFibron();
	
	mulita.adelante(2);
	
	mulita.derecha(90);
	
	mulita.adelante(4);
	
	mulita.derecha(90);
	
	mulita.adelante(2);
	
}
