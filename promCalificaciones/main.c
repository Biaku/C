/*Directivas de preprocesador*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/* Definimos como constante simb�lica el tama�o del arreglo*/
#define TAM 10
/* Definici�n de funci�n principal */
main( )
{
	/*Declaraci�n del arreglo calificaciones*/
	int calif[TAM];
	double prom = 0;
	int i;
	printf("*******************************************\n"); 
	printf("* El siguiente programa calcula el promedio de *\n"); 
	printf("* un grupo de diez estudiantes *\n"); 
	printf("********************************************\n"); 
	/*Lectura y suma de las calificaciones*/
	for(i=0; i < TAM; i++)
	{
		printf("Proporciona la calificaci�n %d: ",i+1);
		scanf("%d", &calif[i]);		
		prom = prom + calif[i];
	}
	/*C�lculo e impresi�n del promedio*/
	prom = prom/TAM;
	/*Impresi�n de las calificaciones*/
	printf("\nLas calificaciones ingresadas fueron: \n");
	for(i=0; i < TAM; i++)
	printf("\nCalificacion %d: %d",i+1, calif[i]);
	printf("\n\n\tPromedio = %.2f\n\n", prom);
	system("pause");
}
