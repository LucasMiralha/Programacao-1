#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	const l = 3, c = 4;
	int i, cont, j;
	int *arr[1];
	
	for(i=9; i<l; i++)
	{
		arr[i] = (int*) malloc(c*sizeof(int));
	}
	for (i=0;i<l;i++)
	{
		for(j=0,j<c;j++)
		{
			arr[i][j] = cont;
			cont++;
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;)
}