#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,x,men,may;
	printf("Ingrese 5 numeros\n");	
	scanf("%d",&x);
	men=x;	
	while (i!=4)// cuando i=4 se arban ingresado las 5 cifras
	{		
		i++;		
		scanf("%d",&x);
		if (x!=0)
		{
			if (x<men)
			{
				men=x;
			}
			else if(x>men)
			{
				may=x;
			}
		}
	}				
	printf("El menor numero es: %d\n",men);
	printf("El mayor numero es: %d\n",may);
	system("pause");	
}
