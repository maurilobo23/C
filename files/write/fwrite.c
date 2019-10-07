#include<stdio.h>
#include<stdlib.h>

       struct Estudiante
       {
              int num;
              char nombre[25];
              float promedio;
       };

       void main()
       {
              FILE *fp;
              char ch;
              struct Estudiante fca;

              fp = fopen("FCA.txt","at+");            //Statement   1

              if(fp == NULL)
              {
                     printf("\nError.");
                     exit(0);
              }

              do
              {
                      printf("\nNum Cuenta : ");
                      scanf("%d",&fca.num);

		      fflush(stdin);
         	      puts("Nombre:");
                      scanf("%s",fca.nombre);

                      printf("Promedio : ");
                      scanf("%f",&fca.promedio);

                      fwrite(&fca,sizeof(fca),1,fp);
            		getchar();

                      printf("\nDeseas agrgar otro (s/n) : ");
		      scanf("%c", &ch);

              }while(ch=='s' || ch=='S');

              printf("\nEscribiendo archivo...");

              fclose(fp);
       }

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    archivo = fopen("hello.txt", "a");
    
    if(archivo == NULL)
        exit(0);
    else
    {
        fprintf(archivo, "%s%s\n", "Hola mundo ", nombre);
        puts("Escrbiendo...");
    }
        getchar();
        fclose(archivo);
    return 0;
}

//asi funciona un fgets(parametro, tamaño, entrada estandar)
