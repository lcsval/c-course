#include <stdio.h>
#include <string.h>

int main()
{
	char nome[] = "Lucas Val";
	//int tam = strlen(nome);
	int i = 0;

	while (nome[i] != '\0')
	{
		printf("%c", nome[i]);
		i++;
	}

	return 0;
}
