/*El paso por valor envía una copia de los parámetros a la función por lo tanto los cambios que se hagan en ella no son tomados en cuenta dentro de la función main()*/

#include <stdio.h>

void sumar_valor(int numero); /* prototipo de la función */

int main(void)
{
	int numero = 57;

	sumar_valor(numero); /* enviamos numero a la función */

	printf("Valor de numero dentro de main() es: %d\n", numero);
	/* podemos notar que el valor de numero se modifica
	 * sólo dentro de la función sumar_valor pero en la principal
	 */

	return 0;
}

void sumar_valor(int numero)
{
	numero++; /* le sumamos 1 al numero */

	printf("Valor de numero dentro sumar_valor() es: %d\n", numero);

	return;
}

/*El paso por valor envía una copia de los parámetros a la función por lo tanto los cambios que se hagan en ella no son tomados en cuenta dentro de la función main()*/

#include <stdio.h>

void sumar_valor(int numero); /* prototipo de la función */

int main(void)
{
	int numero = 57;

	sumar_valor(numero); /* enviamos numero a la función */

	printf("Valor de numero dentro de main() es: %d\n", numero);//recibe el valor y hace una copia y modifica ese número sin modificar el original
	/* podemos notar que el valor de numero se modifica
	 * sólo dentro de la función sumar_valor pero en la principal
	 */

	return 0;
}

void sumar_valor(int numero)
{
	numero++; /* le sumamos 1 al numero */

	printf("Valor de numero dentro sumar_valor() es: %d\n", numero);

	return;
}
