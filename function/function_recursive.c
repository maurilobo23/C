#include <stdio.h>

long factorial(int n)
{
	if (n == 0) /* caso base */
		return 1; /* como 0! = 1, se retorna 1*/
	else
		return n * factorial (n - 1); /* llamada a esta misma función */
}

int main(void)
{
	/* en este caso se llama a la función y se imprime directamente*/
	printf("%ld ", factorial(3));

	return 0;
}

#include <stdio.h>

long factorial(int n);


int main(void)
{
	/* en este caso se llama a la función y se imprime directamente*/
	printf("%ld ", factorial(5));

	return 0;
}

long factorial(int n)
{
	if (n == 0){ /* caso base */
		printf("IF, N vale: 1\n ");
		return 1; /* como 0! = 1, se retorna 1*/
	}
	else{
		printf("ELSE, vale: %d\n ", n);
		return n * factorial (n - 1); /* llamada a esta misma función */
	}
}

