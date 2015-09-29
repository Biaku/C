/* Programa: nomina.c
*  Descripción: calcula la nómina a pagar de n trabajadores
*/
/*directivas de preprocesador*/
#include<stdio.h>
#include<stdlib.h>

/* PRUEBA REALIZADA POR GUSTAVO JIMENEZ TORRES*/

/*Función Principal*/
main ()
{
	/* Declaración de las variables */
	int n,c;
	float nom,sal;
	/* Lectura del número de empleados */
	printf ("Calculo de la Nomina\n\n ");
	printf ("Ingrese el total de empleados: ");
	scanf ("%d",&n);
	/*Ciclo definido de 1 hasta el número de empleados ingresados*/
	for (nom=0,c=1;c<=n;c=c+1)
	{
		printf ("\nIngresa el salario del trabajador %d: ", c);
		scanf ("%f",&sal);
		/*Acumulador de salários*/
		nom=nom+sal;
	}
	printf("\n La nomina a pagar es %.2f", nom);
}
