#include <stdio.h>
void funA(char num);
void funB(char num);

int main(void)
{
	funA('Z'); 
	return 0;
}
void funA(char num)
{
	if (num > 'A') 
		funB(num);
	printf("%c ,", num);
}
void funB(char num)
{
	funA(--num); 
}

#include <stdio.h>
void funA(int num);
void funB(int num);

int main(void)
{
	funA(1); 
	return 0;
}
void funA(int num)
{
	if (num < 20) 
		funB(num);
	printf("%d ,", num);
}
void funB(int num)
{
	funA(++num); 
}
