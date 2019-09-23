#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
//#include <curses.h>

int main(void)
{
  int x,y,z,cont;

  x=0;
  y=1;
 
 
  for (cont=1;cont<=5;cont++)
  {
      
      x=cont+y;
      printf("%d\n",x);
      y++;
      /*x=y;
      y=z;*/
  }
  printf("Valor final: %d\n",cont);
  getchar();
  return 0;
}

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int cont;

  for (cont=0;cont<=100;cont=cont+20) //declaramos a cont como una variable que podamos sumar en par o impar//
  {
      printf("%d: Debo havcer mi tarea\n", cont); //%d representa lo que vale cont y regresa la etiqueta debo hacer mi tarea//
     
      
  }
  printf("Valor final: %d\n",cont); //%d\n va a regresar el valor de cont//
  getchar();
  return 0;
}
