#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main()
{
	int *v;

	v = (int*)malloc(10 * sizeof(int));
	if (v == NULL)
	{
		printf("Memoria insuficiente\n");
		exit(1);
	}
	
	v[0] = 10;
	v[1] = 20;
	
	print("%d\n" v[0]);
	
	free(v);

	return 0;
}