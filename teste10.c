#include <stdio.h>

//void f(float (*mat)[2])
void f(float mat[][2])
{
	int i, j;
	
	for (i = 0; i < 2; i ++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%.2f\t", mat[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	float mat[2][2]= {{2,3}, {4,5}};

	f(mat);

	return 0;
}
