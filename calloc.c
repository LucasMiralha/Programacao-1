#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//realloc

void main()
{
	char s[200];
	int *outra = NULL;
	int i, n;
	
	printf("Digite uma string: "); gets(s);
	
	//outra = (int*) calloc(n, sizeof(int));
	outra = (int*) malloc(n*sizeof(int));
	if(outra == NULL)
	{
		printf("Nao possui memoria");
	}
	else
	{
		for(i=0;i<n;i++)
		{
			
		}
	}
}