#include <stdio.h>

void saludo(void)
{
 	printf("Hola Mundo\n"); /* imprime la cadena */
	return; /* sale de la función */
}
 
int main(void) /* Función principal del programa */
{
	saludo(); /* llamada a la función saludo*/
	return 0; /* sale del programa con código 0 (correcto) */
}

#include <stdio.h>

int main(void) /* Función principal del programa, encargada de ejecturar todo en el programa y en esas funciones puede ejecutar más */
{
    int x;
 	for(x=1; x<=50; x++){
 	    printf("%d :", x);
 	    saludo();
    }
    printf("fuera del for: ");
    saludo();
    return 0;
}
void saludo(void)
{
 	printf("Hola Mundo\n"); /* imprime la cadena */
	return; /* sale de la función */
}

#include <stdio.h>

void saludo(void);
int  y = 10;

// funciones globales se usan en todo el programa, las locales en el bloque de funcion
int main(void) /* Función principal del programa, encargada de ejecturar todo en el programa y en esas funciones puede ejecutar más */
{
    int x;
 	for(x=1; x<=50; x++){
 	    printf("%d :", x);
 	    //printf("la variable y vale: %d\n", y);
 	    saludo();
    }
    printf("fuera del for: ");
    saludo();
    return 0;
}
void saludo(void)
{
 	printf("Hola Mundo\n"); /* imprime la cadena */
	return; /* sale de la función */
}
    

    
