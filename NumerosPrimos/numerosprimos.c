/* 
*  Descripción: Identifica si el numero ingresado es primo
*  Autor : GUSTAVO JIMENEZ TORRES
*/
/*directivas de preprocesador*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* PRUEBA REALIZADA POR GUSTAVO JIMENEZ TORRES*/

/*Función Principal*/
main ()
{
	// Variables utilizadas	
	int i;
	int j;
	int divisores;
	int numero;	
	int residuo;
				
	// aqui pide que se ingresen 10 numeros				
	for (i = 1,j; i<=10; i++ )
	{
		printf ("Ingresa el numero a evaluar:");
		scanf ("%d",&numero);			
		for(j=1;j<=numero;j++)
		{					
		    // se divide el numero ingresado y se le asigna el valor a la variable mod	
			residuo = numero%j;			
			// si el resto es igual a 0 la variable divisores aumenta en 1
			if(residuo == 0)
			{
				divisores++;					
			}
		}		
		// cuando el numero ingresado se ha dividio y cuando el residuo solo da cero 2 veces significa que es primo
		if(divisores == 2)
		{			
			printf("Es numero primo\n");
			divisores = 0;
		}
		// si el residuo da cero mas de 2 veces entonces no es primo
		else
		{			
			printf("No es numero primo\n");
			divisores = 0;
		}					
	}					
}
