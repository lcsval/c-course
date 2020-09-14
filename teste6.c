#include <stdio.h>

void f(int *n)
{
	*n = 20;
}

int main()
{
	int n = 10;
	
	f(&n);
	
	printf("%d\n", n);
	
	return 0;
}
