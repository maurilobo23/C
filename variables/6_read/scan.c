#include <stdio.h> // Archivo de cabecera para subrutinas de e/s
#include <stdlib.h> // Archivo de cabecera para subrutinas de utilidades

int num_cuenta;
float promedio;
char nombre[10];

int main()
{ // Inicio
 printf("Ingrese numero de cuenta:");
 scanf("%d",&num_cuenta);
 printf("Ingrese promedio:");
 scanf("%f",&promedio);
 printf("Ingrese nombre:");
 scanf("%s",nombre);
 // Imprime el registro
 printf("Alumno : %d %0.3f %s\n",num_cuenta,promedio,nombre);
 return 0;
} // Fin de programa


#include <stdio.h> // Archivo de cabecera para subrutinas de e/s
#include <stdlib.h> // Archivo de cabecera para subrutinas de utilidades


int num_cuenta;	

float promedio;
char nombre[20];
float cal1; 
float cal2; 
float cal3; 
float cal4; 

int main() 
{ // Inicio
 printf("Ingrese numero de cuenta:");
 scanf("%d",&num_cuenta);
 printf("Ingrese promedio:");
 scanf("%f",&promedio);
 printf("Ingrese nombre:");
 scanf("%s",nombre);
 printf("Ingrese primera calificacion:");
 scanf("%f",cal1);
 printf("Ingrese segunda calificacion:");
 scanf("%f",cal2);
 printf("Ingrese tercera calificacion:");
 scanf("%f",cal3
 );
 // Imprime el registro
 printf("Alumno : %d %f %s %f %f %f\n",num_cuenta,promedio,nombre, cal1, cal2, cal3);
 return 0;
} // Fin d
