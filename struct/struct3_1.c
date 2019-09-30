#include <stdio.h> // Archivo de cabecera para subrutinas de e/s
#include <stdlib.h> // Archivo de cabecera para subrutinas de utilidades
#include <string.h>

struct biblioteca { // Crea la estructura del registro
	char codigo[10];
	char titulo[50];
	char autor[50];
}libro2;

void limpiar (char *cadena)
{
  char *p;
  p = strchr (cadena, '\n');
  if (p)
    *p = '\0';
}

int main()
{ // Inicio
 system("clear"); // Limpia pantalla
 // Ingresa datos del registro
 fflush(stdin);
 printf("Ingrese el codigo:");
 fgets(libro2.codigo, 10 , stdin);
 fflush(stdin);
 printf("Ingrese el nombre del autor:");
 fgets(libro2.autor, 50, stdin);
 limpiar(libro2.autor);
 fflush(stdin);
 printf("Ingrese el título del libro:");
 fgets(libro2.titulo, 50, stdin);
 limpiar(libro2.titulo);
 // Imprime el registro
 printf("Registro: %d %s %s\n",atoi(libro2.codigo),libro2.titulo,libro2.autor);
 return 0;
} // Fin de programa| 


#include <stdio.h> // Archivo de cabecera para subrutinas de e/s
#include <stdlib.h> // Archivo de cabecera para subrutinas de utilidades
#include <string.h> //sin esta cabecera no se podria compilar pues faltaria esta biblioteca , atoi y along, (son cambios de tipo de dato)

struct biblioteca { // Crea la estructura del registro
	char codigo[10];
	char titulo[50];
	char autor[50];
}libro2;

void limpiar (char *cadena) //apuntadores, aqui va a entrar algo pero a una cadena de caracteres
{
  char *p;
  p = strchr (cadena, '\n');// funcion, en esta cadena buscame la primera concicdencia quie tengas con esto "\n"es un salto de linea"
  if (p)
    *p = '\0'; // donde encontraste esto "\n" vas a poner esto "\0" y indica el fin de una cadena
}

int main()
{ // Inicio
 system("clear"); // Limpia pantalla
 // Ingresa datos del registro
 fflush(stdin);
 printf("Ingrese el codigo:");
 fgets(libro2.codigo, 10 , stdin);
 fflush(stdin);
 printf("Ingrese el nombre del autor:");
 fgets(libro2.autor, 50, stdin);
 limpiar(libro2.autor); //llamamos la funcion y mandamos el párametro que es la cadena, limpiar la cadena para que posterioremente cuando se imprima 
 //busca el salto de linea y lo cambia por un 0 que es el fin de la cadena y asi no imprime el salto
 fflush(stdin);
 printf("Ingrese el título del libro:");
 fgets(libro2.titulo, 50, stdin);
 limpiar(libro2.titulo);
 // Imprime el registro
 printf("Registro: %d %s %s\n",atoi(libro2.codigo),libro2.titulo,libro2.autor);// para cambiar el tipo de variable
 return 0;
} // Fin de programa| 
