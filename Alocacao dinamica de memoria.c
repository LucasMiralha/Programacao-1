#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//alocacao dinamica de memoria

void main()
{
	char s[200];
	char *outra = NULL;
	
	printf("Digite uma string: "); gets(s);
	
	outra = (char*) malloc(strlen(s)+1);
	
	strcpy(outra, s);
	
	printf("Original: %s\nCopia: %s", s, outra);
	
	free(outra);
}