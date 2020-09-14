#include <stdio.h>

/*
Fatorial
4! = 4 * 3 * 2 * 1 = 24
5! = 120
0! = 1! = 1
*/

int fat(int n)
{
	if (n == 0 || n == 1)
		return 1;
	
	return n * fat(n - 1);
}


int main()
{
	int num = 0;
	
	printf("Fatorial de %d = %d\n", num, fat(num));
	return 0;
}
