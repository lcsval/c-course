#include <stdio.h>

void f(int v[10])
{
	
	v[0] = 20;
}

int main()
{
	int v[10], i;
	
	for (i = 0; i < 10; i++)
		v[i] = i;

	for (i = 0; i < 10; i++)
		printf("%d ", *(v + i));
	
	return 0;
}
