#include <stdio.h>
#include <stdlib.h>

/* Realiza un programa en lenguaje C que dada la fecha de nacimiento de una persona (puede ingresarse como 3 variables),
   nos diga si es mayor de edad o no 
   y cuantos años hace que cumplió la mayoría de edad. 
*/

int main()
{
	const int ANIO_ACTUAL = 2015;
	const int MAYOR_EDAD = 18;
	int anio_nac,edad;
		
	printf("Ingresa tu año de nacimiento para saber tu edad ejemplo: 1991 \n");
	scanf("%d",&anio_nac);	
	edad = ANIO_ACTUAL-anio_nac;	
	if(edad>=18)
	{
		printf("Felicidades eres mayor de edad \n");
		printf("Tienes %d años \n",edad);
		printf("Cumpliste la mayoria de edad hace %d",edad-MAYOR_EDAD);		
	}
	else
	{
		printf("Lo siento no eres mayor de edad \n");
		printf("Solo tienes %d \n",edad);
		printf("Sigue participando =)");
	}
}
