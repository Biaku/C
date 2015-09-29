#include <stdio.h>
#include <stdlib.h>
float celciusFahrenheit()
{
	float fahrenheit = 0;
	float grados = 0;	
	printf("\n\tCelsius a Fahrenheit" );
	printf("\n\tIngrese grados Centigrados =" );
	scanf("%f",&grados);
	fahrenheit = (grados * (9.0/5.0))+32.0;
	printf(" ============================\n" );
	printf("Los grados Centigrados son %.2f\n",grados);
	printf("Que equivale a %.2f F\a\n",fahrenheit);
}
float fahrenheitCelcius()
{
	float celcius = 0;
	float grados = 0;
	printf("\n\tFahrenheit a Celsiusn" );
	printf("\n\tIngrese grados Fahrenheit =" );
	scanf("%f",&grados);
	celcius = (grados-32.0)*(5.0/9.0);
	printf(" ============================\n" );
	printf("Los grados Fahrenheit son %.2f\n",grados);
	printf("Que equivale a %.2f C\a\n",celcius);
}
main()
{
	int opcion;
	printf("Sistema de convercion de grados centigrados\n");
	printf("Fahrenheit a Celsius: C=(F-32)*(5/9)\nCelsius a Fahrenheit: F=C*(9/5)+32\n" ) ;
	printf("1 \t Celcius a Fahrenheit \n");
	printf("2 \t Fahrenheit a Celcius \n");
	printf("Eliga una opcion: ");
	scanf("%d",&opcion);
	if(opcion == 1)
	{
		celciusFahrenheit();
	}
	else if(opcion == 2)
	{
		fahrenheitCelcius();
	}			
}
