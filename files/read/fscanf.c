/*int fscanf(FILE *fichero, const char *formato, argumento, ...);*/
//es lo mismo que el scanf pero con limitantes y no sirve muy bien
#include <stdio.h>

 
int main ( int argc, char **argv )
{
 	FILE *fp;
 	
 	char buffer1[100];
 	char buffer2[100];
 	
 	fp = fopen ( "../gente.txt", "r" );
 	
 	fscanf(fp, "%s\n%s" ,buffer1, buffer2);
 	printf("%s\n%s",buffer1, buffer2);
 	
 	fclose ( fp );
 	
 	return 0;
}
