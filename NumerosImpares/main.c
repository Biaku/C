#include <stdio.h>
#include <stdlib.h>
// Este programa imprime todos los numeros impares hasta el 500

/* 
	para determinar si un numero es impar
	se divide el numero entre 2 y 
	si el resto da cero es PAR,
	de lo contrario es impar.
*/

int main() 
{
	int i;
	int resto;
	for(i=0;i<=500;i++)
	{
		resto = i%2;
		if(resto != 0)
		{
			printf("%d \t",i);			
		}
	}
}
