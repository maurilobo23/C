#include <stdio.h>
int main()
{
	int edad;
	printf("Introduce tu edad: ");
	scanf("%d",&edad);

	if (edad >17 && edad <35)
	{
		 printf("Tienes %d anios, eres mayor de edad",edad);
	}
	else if (edad < 17)
	{
		 printf("Tienes %d anios, eres menor de edad",edad);
	}
	else if (edad >= 35)
	{
		 printf("Tienes %d anios, eres chavo-ruco",edad);
	}
	else
	{
		 printf("Tienes %d anios, ",edad);
	}
  return 0;
} 	

#include <stdio.h>
int main()
{
	int edad;
	printf("Introduce tu edad: ");
	scanf("%d",&edad);

	if (edad >17 && edad <35)
	{
		 printf("Tienes %d anios, eres mayor de edad",edad);
	}
	else if (edad < 18)
	{
		 printf("Tienes %d anios, eres menor de edad",edad);
	}
	else if (edad > 35 && edad <110)
	{
		 printf("Tienes %d anios, eres chavo-ruco",edad);
	}
	else if (edad > 110)
	{
		 printf("Tienes mas de %d anios, no eres humano",edad);
  return 0;
} 	
	else
	{
	printf("Fin de programa\n");
	}
} 	
