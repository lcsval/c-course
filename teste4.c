#include <stdio.h>

int somar(int n1, int n2);

int main()
{
	printf("Soma: %d\n", somar(10, 20));
	return 0;
}

int somar(int n1, int n2)
{
	return n1 + n2;
}
