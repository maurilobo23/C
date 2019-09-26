#include <stdio.h>


int sumar(int n1, int n2)
{
	return n1 + n2;
}
int restar(int numero1, int numero2)
{
	return numero1 - numero2;
}

int main(void)
{
	int suma = sumar(20, 230); /* Se ejecuta correctamente*/
	/*printf("La suma de %d + %d es: %d\n ",n1, n2, suma);*/
	printf("La suma es: %d\n ", suma);
	int resta = restar(1150, 230);
/*	printf("La resta de %d - %d es: %d ", numero2, numero1, suma);*/
	printf("La resta es: %d\n ", resta);
	return 0;
}

#include <stdio.h>
int sumar(int n1, int n2);
int restar(int n1, int n2);
int multiplicar(int n1, int n2);
int divide(int n1, int n2);

int main(void)
{
	//int suma = sumar(20, 230); /* Se ejecuta correctamente*/
	/*printf("La suma de %d + %d es: %d\n ",n1, n2, suma);*/
	printf("La suma es: %d\n ", sumar(20, 230));
	//int resta = restar(1150, 230);
/*	printf("La resta de %d - %d es: %d ", numero2, numero1, suma);*/
	printf("La resta es: %d\n ", restar(1150, 230));
	//int multiplicar = multiplicar(1150, 230);
	printf("la multiplicar es: %d\n", multiplicar(1150, 230));
	printf("la división es: %d\n", divide(1150, 110));
	return 0;
}

int sumar(int n1, int n2)
{
	return n1 + n2;
}
int restar(int numero1, int numero2)
{
	return numero1 - numero2;
}
int multiplicar(int numero1, int numero2)
{
	return numero1 * numero2;
}
int divide(int numero1, int numero2)
{
	return numero1 / numero2;
}

