#include <stdio.h>
#include <stdlib.h>

/* 
Determinar la cantidad de dinero que recibirá un trabajador por concepto de las horas extras trabajadas en una empresa,
sabiendo que hay trabajadores que laboran 40 horas y otros 48 horas a la semana, por lo tanto debemos determinar si el trabajador es de 40 o de 48,
el resto de las horas se consideran extras, éstas se pagan al doble de una hora normal cuando no exceden de 8;
si las horas extras exceden de 8 se pagan las primeras 8 al doble de lo que se paga por una hora normal y el resto al triple hasta un tope de 18 horas,
si alguien trabaja más horas, se calcula hasta el tope de 18 y se le agrega un bono de 1000 pesos.
*/

// No se sabe cual es el precio de la hora
// Existen 2 tipos de trabajadores
// Trabajador1 labora 40 horas
// Trabajador2 labora 48 horas
// Hay que identificar que tipo de trabajador es
// Las horas extras se pagan:
// Dobles si no pasan de 8
// Si pasan de 8 horas de la 1 a la 8 se pagan DOBLES y de la 9 a las 18 se pagan TRIPLE
// Si se trabaja mas de 18 horas hacen los calculos anteriores y se le agrega 1000

int main()
{
	// Ya que la problematica no dice cuanto cuesta una hora me tomare la libertad asignarle precio mediante una constante ya que el precio no cambiara	
	const float PRECIO_HORA = 10.50;	
	// Se define una constante del bono de 1000 ya que nunca cambiara
	const int BONO = 1000;	
	// Se definen las variables que serviran para almacenar el tipo de trabajador, las horas extras laboradas y su sueldo
	int tipoTrabajador,horasExtras;
	float sueldoTrabajadorAdm = PRECIO_HORA * 40;
	float sueldoTrabajadorOp  = PRECIO_HORA * 48;
	// Se define la variable que almacenara el total a pagar
	float montoPagado;
	// Se pedira que el usuario seleccione que tipo de trabajador es
	printf("TIPOS DE TRABAJADOR \n");
	printf("[1]\t Administrativo \n");
	printf("[2]\t Operativo\n\n");
	printf("Seleccione una opcion:");
	scanf("%d",&tipoTrabajador);
	// Se valida que tipo de trabajador es y se muestra mensaje
	if(tipoTrabajador==1)
	{
		printf("=====================================\n");
		printf("A seleccionado la opcion 1\n\n");
		printf("Usted es un Trabajador Administrativo con jornada laboral de 40 horas semanales\n\n");
		printf("Por favor ingrese cuantas horas extras laboro en la semana:");
		scanf("%d",&horasExtras);		
		// Dependiendo de las horas extras laboradas se hace el calculo para saber cuanto se pagara
		if(horasExtras<=8)// si las horas son menores o iguales que 8 se pagan doble
		{
			montoPagado = (PRECIO_HORA * 2) * horasExtras;
			printf("Su sueldo semanal es de %.2f\n",sueldoTrabajadorAdm);
			printf("Trabajo %d horas extra esta semana generando un extra de %.2f\n",horasExtras,montoPagado);
			printf("Su sueldo total de esta semana es de %.2f\n",montoPagado+sueldoTrabajadorAdm);	
		}
		else if(horasExtras<=18) // si es menor o igual que 18 las primeras 8 se pagan dobles y las demas hasta 18 se pagan triple
		{
			//(10.50*2)*8+(10.50*3)*(10-8)
			montoPagado = (PRECIO_HORA * 2) * 8 + (PRECIO_HORA * 3) * (horasExtras - 8);
			printf("Su sueldo semanal es de %.2f\n",sueldoTrabajadorAdm);
			printf("Trabajo %d horas extra esta semana generando un extra de %.2f\n",horasExtras,montoPagado);
			printf("Su sueldo total de esta semana es de %.2f\n",montoPagado+sueldoTrabajadorAdm);
		}
		else if(horasExtras>18) // si son mayor que 18 las primeras 8 se pagan dobles y las demas hasta 18 se pagan triple mas un bono de 1000
		{
			//(10.50*2)*8+(10.50*3)*(18-8)+1000
			montoPagado = (PRECIO_HORA * 2) * 8 + (PRECIO_HORA * 3) * (18 - 8) + BONO;
			printf("Su sueldo semanal es de %.2f\n",sueldoTrabajadorAdm);
			printf("Trabajo %d horas extra esta semana generando un extra de %.2f\n",horasExtras,montoPagado);
			printf("Su sueldo total de esta semana es de %.2f\n",montoPagado+sueldoTrabajadorAdm);
		}
	}
	else if(tipoTrabajador==2)
	{
		printf("=====================================\n");
		printf("A seleccionado la opcion 2\n\n");
		printf("Usted es un Trabajador Operativo con jornada laboral de 48 horas semanales\n\n");
		printf("Por favor ingrese cuantas horas extras laboro en la semana:");
		scanf("%d",&horasExtras);
		// Dependiendo de las horas extras laboradas se hace el calculo para saber cuanto se pagara
		if(horasExtras<=8)// si las horas son menores o iguales que 8 se pagan doble
		{
			montoPagado = (PRECIO_HORA * 2) * horasExtras;
			printf("Su sueldo semanal es de %.2f\n",sueldoTrabajadorOp);
			printf("Trabajo %d horas extra esta semana generando un extra de %.2f\n",horasExtras,montoPagado);
			printf("Su sueldo total de esta semana es de %.2f\n",montoPagado+sueldoTrabajadorOp);	
		}
		else if(horasExtras<=18) // si es menor o igual que 18 las primeras 8 se pagan dobles y las demas hasta 18 se pagan triple
		{
			//(10.50*2)*8+(10.50*3)*(10-8)
			montoPagado = (PRECIO_HORA * 2) * 8 + (PRECIO_HORA * 3) * (horasExtras - 8);
			printf("Su sueldo semanal es de %.2f\n",sueldoTrabajadorOp);
			printf("Trabajo %d horas extra esta semana generando un extra de %.2f\n",horasExtras,montoPagado);
			printf("Su sueldo total de esta semana es de %.2f\n",montoPagado+sueldoTrabajadorOp);
		}
		else if(horasExtras>18) // si son mayor que 18 las primeras 8 se pagan dobles y las demas hasta 18 se pagan triple mas un bono de 1000
		{
			//(10.50*2)*8+(10.50*3)*(18-8)+1000
			montoPagado = (PRECIO_HORA * 2) * 8 + (PRECIO_HORA * 3) * (18 - 8) + BONO;
			printf("Su sueldo semanal es de %.2f\n",sueldoTrabajadorOp);
			printf("Trabajo %d horas extra esta semana generando un extra de %.2f\n",horasExtras,montoPagado);
			printf("Su sueldo total de esta semana es de %.2f\n",montoPagado+sueldoTrabajadorOp);
		}
	}
	
	
	
	
}
