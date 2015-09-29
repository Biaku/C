#include <stdio.h>
#include <stdlib.h>
// Gustavo Jimenez Torres

//Ejemplo de aplicacion del diseño descendente a un problema \\

//Escribe un programa que dibuje la siguiente piramide utilizando unicamente los simbolos O y X 
//usando la salida estandar en modo texto de pantalla. Generaliza el programa para una piramide de n lineas 
//(donde n sera menor que 24 lineas que es la capacidad del modo texto normal.)

int main() 
{
	int i,j;
	int n=5;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		printf("O");
		for(j=1;j<=2*i-1;j++)
		printf("X");
		printf("\n");
	}
	system("pause");
}
