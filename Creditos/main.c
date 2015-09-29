#include <stdio.h>
#include <stdlib.h>
// DESARROLLADO POR GUSTAVO JIMENEZ TORRES

/* 
Este programa está basado en una necesidad real de mi trabajo, ya que se autorizan créditos FONACOT Y FAMSA,
para ello se necesita identificar si son créditos nuevos o es una reestructuración de un crédito, 
para realizar el cálculo que indicara cuanto es su capacidad de crédito, 
se calcula sumando el alcance liquido con los créditos que el trabajador tenga vigentes, 
la suma total se multiplica por el 30% y al resultado de esta última operación se le restan el monto de los créditos que tenga vigentes
y eso da como resultado la capacidad de crédito del trabajador.
Nota: cuando es reestructuración, no se toma en cuenta el crédito que está reestructurando en la resta del resultado del 30%
*/

// declaracion de variables globales
int tipoPrestamo;
int operacion;
int tienePrestamos;
int cantidadPrestamos;	
int aReestructurar;
float alcanceLiquido;
float totalLiquido;
float capacidad;
float capacidadReal;
float totalPrestamo;

// verifica que operacion se realizara
// 1 Nuevo credito
// 2 Reestructuracion de credito
void tipoOperacion (int tipo)
{
	if(tipo == 1)
	{
		nuevoCredito();
	}
	else if (tipo == 2)
	{
		reestructuracionCredito(tipo);
	}	
}
// Funcion para calcular un nuevo credito
void nuevoCredito()
{
	printf("\n \t ===CREDITO NUEVO===");
	printf("\n || Tiene prestamos vigentes? ||\n\n");
	printf("1 \t SI \n");
	printf("2 \t NO \n");
	printf("\n Selecciona una opcion: ");
	scanf("%d",&tienePrestamos);
	
	if(tienePrestamos == 1)
	{
		inicializaPrestamos();					
	}
	else if(tienePrestamos == 2)
	{
		calculo(1);		
	}
}
// funcion para reestructurar un credito existente
void reestructuracionCredito(int tipo)
{
	printf("\n \t ===REESTRUCTURACION===\n\n");
	inicializaPrestamos(tipo);	
}
// funcion que inicializa los prestamos
void inicializaPrestamos(int tipo)
{
	int i;	
	printf("Cuantos prestamos tiene: ");
	scanf("%d",&cantidadPrestamos);
	float prestamos[cantidadPrestamos];
	for(i=0; i<cantidadPrestamos;i++)
	{
		printf("\nIngresa la cantidad del prestamo %d :",i+1);
		scanf("%f",&prestamos[i]);
		totalPrestamo += prestamos[i];
	}
	if(tipo == 2)
	{
		printf("\n || Prestamos vigentes || \n\n");
		for(i=0; i<cantidadPrestamos;i++)
		{
			printf("%d \t %.2f \n",i+1,prestamos[i]);
		}
		printf("\nSelecciona el prestamo que se va a reestructurar: ");
		scanf("%d",&aReestructurar);
		aReestructurar = prestamos[aReestructurar-1];	
	}
	calculo(tipo);
}
// funcion que calcula la capacidad real de credito nuevo o reestructuracion
void calculo(int tipo)
{
	printf("\nIngresa el alcance liquido: ");
	scanf("%f",&alcanceLiquido);
	totalLiquido = alcanceLiquido + totalPrestamo;
	capacidad = totalLiquido * 0.30;
	if(tipo == 1)
	{
		capacidadReal = capacidad - totalPrestamo;	
	}
	else if(tipo == 2)
	{
		capacidadReal = capacidad  - (totalPrestamo - aReestructurar);
	}	
	printf("\n  Su capacidad de credito real es de ((( %.2f )))\n",capacidadReal);	
	system("pause");	
}
// funcion principal
int main() 
{		
	printf("\n");
	printf("BIENVENIDO AL SISTEMA DE VERIFICACION DE CREDITOS\n\n");		
	printf("|| Operacion a realizar || \n\n");
	printf("1 \t CREDITO NUEVO \n");
	printf("2 \t REESTRUCTURACION \n\n");
	printf("Selecciona una opcion: ");
	scanf("%d",&operacion);
	tipoOperacion(operacion);
}







