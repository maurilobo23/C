#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int x,y,z,cont;
  x=0;
  y=1;
  for (cont=0;cont<20;cont++)
  {
      z=x+y;
      printf("%d\n",z);
      x=y;
      y=z;
  }
  getchar();
  return 0;
}


#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int x, y, z, cont, stop;
  x=0;
  y=1;
  printf("dame un numero\n");
  scanf("%d",&stop);
  
  if(stop==1){
      printf("\n\n0\n");
    }else if(stop==2){
      printf("0\n0\n1\n");
    }else{
      printf("0\n1\n");
    }
    
  printf("0\n1\n");
  for (cont=0;cont<stop;cont++)
   {
      z=x+y;
      printf("%d\n",z);
      x=y;
      y=z;
    }
  
return 0;
}
