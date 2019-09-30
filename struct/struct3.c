#include <stdio.h> // Archivo de cabecera para subrutinas de e/s
#include <stdlib.h> // Archivo de cabecera para subrutinas de utilidades

struct biblioteca { // Crea la estructura del registro
	char codigo[10];
	char titulo[50];
	char autor[50];
}libro;

int main()
{ // Inicio
 system("clear"); // Limpia pantalla
 struct biblioteca libro2;
 // Ingresa datos del registro
 fflush(stdin);
 printf("Ingrese el codigo:");
 fgets(libro2.codigo, 10 , stdin);
 fflush(stdin);
 printf("Ingrese el nombre del autor:");
 fgets(libro2.autor, 50, stdin);
 fflush(stdin);
 printf("Ingrese el título del libro:");
 /*scanf("%s",libro.titulo);*/
 fgets(libro2.titulo, 50, stdin);
// scanf("%s",libro.autor);
 // Imprime el registro
 printf("Registro: %s %s %s\n",libro2.codigo,libro2.titulo,libro2.autor);
 return 0;
} // Fin de programa| 


#include <stdio.h> // Archivo de cabecera para subrutinas de e/s
#include <stdlib.h> // Archivo de cabecera para subrutinas de utilidades

struct biblioteca { // Crea la estructura del registro
	char codigo[10];
	char titulo[50];
	char autor[50];
}libro;

int main()
{ // Inicio
 system("clear"); // Limpia pantalla
 struct biblioteca libro2; // podemos escribir otras estructuras  en base de la estructura principal
 // Ingresa datos del registro
 fflush(stdin); // vaciar ya que estamos capturando muchas cosas, primero vaciamos todos los caracteres y posterioremente ingresamos otra información
 
 printf("Ingrese el codigo:");
 fgets(libro2.codigo, 10 , stdin); //capturar todo lo que este entrando en el teclado, recibe parametros, el primero es en donde se va a almacenar
 // la segunda es el espacio y la tercera la entrada de la información, "hay diferentes tipos de entrada"
 fflush(stdin);
 printf("Ingrese el nombre del autor:");
 fgets(libro2.autor, 50, stdin);
 fflush(stdin);
 printf("Ingrese el título del libro:");
 /*scanf("%s",libro.titulo);*/
 fgets(libro2.titulo, 50, stdin); // guarda todo, ya que imprime la cadena de caracteres y también el salto de linea
// scanf("%s",libro.autor);
 // Imprime el registro
 printf("Registro: %s %s %s\n",libro2.codigo,libro2.titulo,libro2.autor);
 return 0;
} // Fin de programa| 
