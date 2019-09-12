#include <stdio.h>
#include <stdlib.h>
int main()
{
	int opcion;
	printf("Elige una opción:");
	printf("\t 1.- Suma:\n");
	printf("\t 2.- Resta:\n");
	printf("\t 6.- Salir:\n");
	scanf("%d",&opcion);
	switch(opcion)
	{
	case 1: 
		c= a +b ;
		break;
	case 2: 
		break;
	default:
		printf("No está puesta correctamente la unidad\n");
		exit(0);
	}
	printf("\nLas %f pulgadas son %f centímetros\n", pul, cm);
} 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int opcion, c, x, y;
	printf("dame el primer numero:\n");
	scanf("%d",&x);
	printf("dame el segundo numero:\n");
	scanf("%d",&y);
	
	printf("Elige una opción:");
	printf("\t 1.- Suma:\n");
	printf("\t 2.- Resta:\n");
	printf("\t 3.- Multiplicacion:\n");
	printf("\t 4.- Division:\n");
	printf("\t 5.- Potencia:\n");
	printf("\t 6.- Salir:\n");
	scanf("%d",&opcion);
	switch(opcion)
	{
	case 1: 
		printf("Eligeste la opcion Suma\n");	
		c= x + y ;
		printf("El resultado es %d\n", c);
		break;
	case 2: 
	    printf("Eligeste la opcion Resta\n");
		c= x - y ;
		printf("El resultado es %d - %d es: %d\n", x, y, c);
		break;
	case 3: 
		printf("Eligeste la opcion Multiplicacion\n");	
		c= x * y ;
		printf("El resultado es %d * %d es: %d\n",x, y, c);
		break;
	case 4: 
		printf("Eligeste la opcion Division\n");
		if(y==0){
		    printf("No se puede dividir entre cero\n");
		}
		else{
		    c= x / y ;
		    printf("El resultado es %d / %d es: %d\n",x, y, c);
		}
		break;
	case 5: 
		printf("Eligeste la opcion Potencia\n");
		c= pow(x, y) ;
		printf("El resultado es %d\n", c);
		break;
	
	default:
		printf("No está puesta correctamente la unidad\n");
		exit(0);
	}
	printf("\nfin del programa");
} 
