#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float a,b,c;
int a1, b1;
int main()
{
	system("clear");
	printf("Dame el primer nÃºmero\n");
	scanf("%f",&a);
	a1 = a;
	printf("Dame el segundo nÃºmero\n");
	scanf("%f",&b);
	b1 = b;

	printf("Suma\n");
		c=a+b; // Suma o adiciÃ³n
		printf("\t%f + %f = %f\n",a,b,c);
	printf("Resta\n");
		c=a-b; // Resta o diferencia
		printf("\t%f - %f = %f\n",a,b,c);
	printf("MultiplicaciÃ³n\n");
		c=a*b; // MultiplicaciÃ³n o producto
		printf("\t%f * %f = %f\n",a,b,c);
	printf("DivisiÃ³n\n");
		c=a/b; // DivisiÃ³n o cociente tipo real
		printf("\t%f / %f = %f\n",a,b,c);
	printf("MÃ³dulo\n");
		c=a1%b1; // Resto o mÃ³dulo
		printf("\tEl mÃ³dulo de %d/%d es %f\n",a1,b1,c);
	printf("RaÃ­z cuadrada\n");
		c=sqrt(a); // RaÃ­z cuadrada de el primer numero
		printf("\tLa RaÃ­z cuadrada de %f es %f\n",b,c);
			printf("RaÃ­z cuadrada\n");
		c=sqrt(b); // RaÃ­z cuadrada de el segundo numero
		printf("\tLa RaÃ­z cuadrada de %f es %f\n",a,c);
	printf("Potencia\n");
		c = pow(a, b); //Potencia
	printf("\tEl nÃºmero %f elevado a la potencia %f en %f\n",a,b,c);
	printf("resultado del reto viral agosto");
		c=a/b*(b+b); 
    printf("\t%f / %f * (%f + %f)= %f\n",a,b,b,b,c);
    
    
		
return 0;
}
