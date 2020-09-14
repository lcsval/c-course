#include <stdio.h>
#include <string.h>

int main()
{
	char nome[50];
	
	printf("Digite seu nome: ");
	scanf("%[^\n]", nome);
	printf("Ola %s\n", nome);
	
	return 0;
}
