#include <stdio.h>
#include <stdlib.h>
/*
Elabora un programa que haciendo uso de una estructura nos permita almacenar la siguiente información de un alumno.
Matricula, Nombre, Examen1, Examen 2, Examen Final, Promedio (Este debe ser calculado)
*/
/* Desarrollado pro Gustavo Jimenez Torres*/
int main() 
{
	const TAM = 3;
	int contador;	
	struct alumno
	{
		char nombre[50];
		char matricula[6];
		int calificaciones[TAM];		
		double promedio;
	}tavo;
		
	printf("Introduce los datos del alumno \n");
	scanf("%s",tavo.nombre);
	printf("Introduce la matricula del alumno \n");
	scanf("%s",tavo.matricula);
	for(contador=0; contador<TAM; contador++)
	{
		printf("Introduce la calificacion del examen %d \n",contador+1);
		scanf("%d",&tavo.calificaciones[contador]);		
		tavo.promedio = tavo.promedio + tavo.calificaciones[contador];		
	}
	printf("Nombre:%s \n",tavo.nombre);
	printf("Matricula:%s \n",tavo.matricula);
	printf("Calificacion examen 1: %d \n",tavo.calificaciones[0]);
	printf("Calificacion examen 2: %d \n",tavo.calificaciones[1]);
	printf("Calificacion examen 3: %d \n",tavo.calificaciones[2]);
	tavo.promedio = tavo.promedio/3;
	printf("Su promedio es %.2f",tavo.promedio);	
}
