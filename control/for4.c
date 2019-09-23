#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
//#include <curses.h>

int main(void)
{
  int x,y,z,cont;
  z=1;
  for (x=0;x<=5;x++){
  	for (y=0;y<=5;y++){
     		 printf("[%d]",z);
		 z++;
  	}
     	printf("\n");
  }
  getchar();
  return 0;
}

#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
//#include <curses.h>

int main(void)
{
  int x,y,z,cont;
  z=1;
  for (x=0;x<=5;x++){
  	for (y=0;y<=5;y++){
     		 printf("[%d]",z);
		 z++;
		    if (x==y)
		    { 
		        z=0;
		    }
  	        printf("%d\t",z);
  	}
  	
     	printf("\n");
  }
  getchar();
  return 0;
}

#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
//#include <curses.h>

int main(void)
{
  int x,y,z,cont;
  z=1;
  for (x=0;x<=5;x++){
  	for (y=0;y<=5;y++){
     		 printf("[%d]",z);
		 z++;
		    if (x>y)
		    { 
		        z=0;
		    }
  	        printf("%d\t",z);
  	}
  	
     	printf("\n");
  }
  getchar();
  return 0;
}
