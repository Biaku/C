#include <stdio.h>
#include <stdlib.h>


/* Programa para calcular el salario neto mensual de un trabajador
	AUTOR: Gustavo Jimenez Torres
*/
int main() 
{	
	// Se definen las variables a utilizar
	float salarioBrutoMensual,limiteInferior,resultado1,resultado2,excedente,salarioNetoMensual,cuotaFija;
	
	// se muestra la tabla de impuestos	
	printf("================================================================================\n");
	printf("\t\t TABLA PARA CALCULO DE IMPUESTO MENSUAL \n");
	printf("================================================================================\n");
	printf("Limite inferior \t Limite superior \t Cuota fija \t Porcentaje\n");
	printf("0.01\t\t\t496.07\t\t\t0\t\t\t1.92\n");	
	printf("496.08\t\t\t4210.41\t\t\t9.52\t\t\t6.4\n");	
	printf("4210.42\t\t\t7399.42\t\t\t247.24\t\t\t10.88\n");	
	printf("7399.43\t\t\t8601.5\t\t\t594.21\t\t\t16\n"); 	
	printf("8601.51\t\t\t10298.35\t\t786.54\t\t\t17.92\n"); 	
	printf("10298.36\t\t20770.29\t\t1090.61\t\t\t21.36\n");	
	printf("20770.3\t\t\t32736.83\t\t3327.42\t\t\t23.52\n");	
	printf("32736.84\t\t62500\t\t\t6141.95\t\t\t30\n");	
	printf("62500.01\t\t83333.33\t\t15070.9\t\t\t32\n");	
	printf("83333.34\t\t250000\t\t\t21737.57\t\t34\n");	
	printf("250000.01\t\tEn adelante\t\t78404.23\t\t35\n");	
	printf("================================================================================\n");
	
			
	// Se solocita ingresar el salario bruto mensual
	printf("////////////////////////////////////////////////////////////////////////////////\n");
	printf("\t\t Por favor ingresa tu salario bruto mensual $: ");
	// Se asigna el valor a la variable
	scanf("%f",&salarioBrutoMensual);	
	printf("\n");
	printf("-------------------------------------CALCULANDO---------------------------------\n");
	printf("Tu SALARIO NETO MENSUAL se calculo de la siguiente manera \n");
	printf("1- Se busca en la tabla en que rango se encuentra tu SALARIO BRUTO MENSUAL\n");
	printf("2- Luego se resta tu SALARIO BRUTO MENSUAL - LIMITE INFERIOR\n");
	printf("3- El resultado de la operacion del PASO 2 se multiplica por el PORCENTAJE DE LA TABLA\n");
	printf("4- Por ultimo se resta tu SALARIO BRUTO MENSUAL - CUOTA FIJA  por el resultado del PASO 3\n\n");
	printf("Por lo cual: \n");

	// inician las validaciones segun la tabla para calculo de impuestos mensual
	if(salarioBrutoMensual >=0.01 && salarioBrutoMensual <= 496.07)
	{
		limiteInferior = 0.01;
		excedente = 0.192;
		cuotaFija = 0.00;
		resultado1 = salarioBrutoMensual - limiteInferior;
		resultado2= resultado1*excedente;
		salarioNetoMensual = salarioBrutoMensual - cuotaFija - resultado2;
		printf("TU SALARIO NETO MENSUAL ES DE: %.2f",salarioNetoMensual);
	}
	else if(salarioBrutoMensual >=496.08 && salarioBrutoMensual <= 4210.41)
	{
		limiteInferior = 496.08;
		excedente = 0.640;
		cuotaFija = 9.52;
		resultado1 = salarioBrutoMensual - limiteInferior;
		resultado2= resultado1*excedente;
		salarioNetoMensual = salarioBrutoMensual - cuotaFija - resultado2;
		printf("TU SALARIO NETO MENSUAL ES DE: %.2f",salarioNetoMensual);		
	}
	else if(salarioBrutoMensual >=4210.42 && salarioBrutoMensual <= 7399.42)
	{
		limiteInferior = 4210.42;
		excedente = 0.1088;
		cuotaFija = 247.24;
		resultado1 = salarioBrutoMensual - limiteInferior;
		resultado2= resultado1*excedente;
		salarioNetoMensual = salarioBrutoMensual - cuotaFija - resultado2;
		printf("TU SALARIO NETO MENSUAL ES DE: %.2f",salarioNetoMensual);		
	}
	else if(salarioBrutoMensual >=7399.43 && salarioBrutoMensual <= 8601.50)
	{
		limiteInferior = 7399.43;
		excedente = 0.16;
		cuotaFija = 594.21;
		resultado1 = salarioBrutoMensual - limiteInferior;
		resultado2= resultado1*excedente;
		salarioNetoMensual = salarioBrutoMensual - cuotaFija - resultado2;
		printf("TU SALARIO NETO MENSUAL ES DE: %.2f",salarioNetoMensual);		
	}
	else if(salarioBrutoMensual >=8601.51 && salarioBrutoMensual <= 10298.35)
	{
		limiteInferior = 8601.51;
		excedente = 0.1792;
		cuotaFija = 786.54;
		resultado1 = salarioBrutoMensual - limiteInferior;
		resultado2= resultado1*excedente;
		salarioNetoMensual = salarioBrutoMensual - cuotaFija - resultado2;
		printf("TU SALARIO NETO MENSUAL ES DE: %.2f",salarioNetoMensual);		
	}
	else if(salarioBrutoMensual >=10298.36 && salarioBrutoMensual <= 20770.29)
	{
		limiteInferior = 10298.36;
		excedente = 0.2136;
		cuotaFija = 1090.61;
		resultado1 = salarioBrutoMensual - limiteInferior;
		resultado2= resultado1*excedente;
		salarioNetoMensual = salarioBrutoMensual - cuotaFija - resultado2;
		printf("TU SALARIO NETO MENSUAL ES DE: %.2f",salarioNetoMensual);		
	}
	else if(salarioBrutoMensual >=20770.30 && salarioBrutoMensual <= 32736.83)
	{
		limiteInferior = 20770.30;
		excedente = 0.2352;
		cuotaFija = 3327.42;
		resultado1 = salarioBrutoMensual - limiteInferior;
		resultado2= resultado1*excedente;
		salarioNetoMensual = salarioBrutoMensual - cuotaFija - resultado2;
		printf("TU SALARIO NETO MENSUAL ES DE: %.2f",salarioNetoMensual);		
	}
	else if(salarioBrutoMensual >=32736.84 && salarioBrutoMensual <= 62500)
	{
		limiteInferior = 32736.84;
		excedente = 0.30;
		cuotaFija = 6141.95;
		resultado1 = salarioBrutoMensual - limiteInferior;
		resultado2= resultado1*excedente;
		salarioNetoMensual = salarioBrutoMensual - cuotaFija - resultado2;
		printf("TU SALARIO NETO MENSUAL ES DE: %.2f",salarioNetoMensual);		
	}
	else if(salarioBrutoMensual >=62500.01 && salarioBrutoMensual <= 83333.33)
	{
		limiteInferior = 62500.01;
		excedente = 0.32;
		cuotaFija = 15070.90;
		resultado1 = salarioBrutoMensual - limiteInferior;
		resultado2= resultado1*excedente;
		salarioNetoMensual = salarioBrutoMensual - cuotaFija - resultado2;
		printf("TU SALARIO NETO MENSUAL ES DE: %.2f",salarioNetoMensual);		
	}
	else if(salarioBrutoMensual >=83333.34 && salarioBrutoMensual <= 250000)
	{
		limiteInferior = 83333.34;
		excedente = 0.34;
		cuotaFija = 21737.57;
		resultado1 = salarioBrutoMensual - limiteInferior;
		resultado2= resultado1*excedente;
		salarioNetoMensual = salarioBrutoMensual - cuotaFija - resultado2;
		printf("TU SALARIO NETO MENSUAL ES DE: %.2f",salarioNetoMensual);		
	}
	else if(salarioBrutoMensual >=250000.01)
	{
		limiteInferior = 250000.01;
		excedente = 0.35;
		cuotaFija = 78404.23;
		resultado1 = salarioBrutoMensual - limiteInferior;
		resultado2= resultado1*excedente;
		salarioNetoMensual = salarioBrutoMensual - cuotaFija - resultado2;
		printf("TU SALARIO NETO MENSUAL ES DE: %.2f",salarioNetoMensual);		
	}
}
