//============================================================================
// Name        : TP3.c
// Author      : Lyapunov Pylyp
// Version     : 26/04/2015
//============================================================================

#include <stdio.h>

float getCelcius (int); 

int main () { 
	int celcius;
	
	const LOWER = 0; /* limite inferior de la tabla de temperaturas */
	const UPPER = 60;/* limite superior */
	const STEP = 10;/* incremento */
	
	
	for (celcius = LOWER ; celcius <= UPPER ; celcius = celcius + STEP)
		printf("%3d%6.1f\n", celcius , getCelcius(celcius) );
		
}

float getCelcius (int a){
	float farh;
	farh = (a*(5.0/9.0) + 32);
	return farh;
} 
