/* Programa: nomina.c
*  Descripci�n: calcula la n�mina a pagar de n trabajadores
*/
/*directivas de preprocesador*/
#include<stdio.h>
#include<stdlib.h>

/* PRUEBA REALIZADA POR GUSTAVO JIMENEZ TORRES*/

/*Funci�n Principal*/
main ()
{
	/* Declaraci�n de las variables */
	int n,c;
	float nom,sal;
	/* Lectura del n�mero de empleados */
	printf ("Calculo de la Nomina\n\n ");
	printf ("Ingrese el total de empleados: ");
	scanf ("%d",&n);
	/*Ciclo definido de 1 hasta el n�mero de empleados ingresados*/
	for (nom=0,c=1;c<=n;c=c+1)
	{
		printf ("\nIngresa el salario del trabajador %d: ", c);
		scanf ("%f",&sal);
		/*Acumulador de sal�rios*/
		nom=nom+sal;
	}
	printf("\n La nomina a pagar es %.2f", nom);
}
