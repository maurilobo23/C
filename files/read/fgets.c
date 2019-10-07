/* Lee cadenas de caracteres hasta n-1 caracteres o hasta que lea un cambio de línea '\n' o un final de archivo EOF.
	char *fgets(char *buffer, int tamaño, FILE *archivo);
 * */

#include <stdio.h>
#include <stdlib.h>
 
int main()
{
 	FILE *archivo;
 	
 	char caracteres[100];
 	
 	archivo = fopen("gente.txt","r");
 	
 	if (archivo == NULL)
 		exit(1);
 	else
        {
 	    printf("\nEl contenido del archivo de prueba es \n\n");
 	    while (feof(archivo) == 0)
 	    {
 		fgets(caracteres,100,archivo);
 		printf("%s",caracteres);
 	    }
            getchar();
        }
        fclose(archivo);
	return 0;
}

/* Lee cadenas de caracteres hasta n-1 caracteres o hasta que lea un cambio de línea '\n' o un final de archivo EOF.
	char *fgets(char *buffer, int tamaño, FILE *archivo);
 * */

#include <stdio.h>
#include <stdlib.h>
 
int main()
{
 	FILE *archivo;
 	
 	char caracteres[100];
 	
 	archivo = fopen("gente.txt","r");
 	
 	if (archivo == NULL)
 		exit(1);
 	else
        {
 	    printf("\nEl contenido del archivo de prueba es \n\n");
 	    while (feof(archivo) == 0)//funcion que va a regresar el fin del archivo y le tenemos que pasar algo que es el archivo
 	    
 	    {
 		fgets(caracteres,100,archivo);//leer el archivo y asignarlo a los caracteres
 		//fgets(persona[i])
 		printf("%s",caracteres);
 	    }
            getchar();
        }
        fclose(archivo);
	return 0;
}
