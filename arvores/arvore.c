#include <stdlib.h>
#include "arvore.h"
#include <stdio.h>

struct arv
{
	char info;
	struct arv* esq;
	struct arv* dir;
};

Arv* criar_vazia()
{
	return NULL;
}

Arv* criar(char c, Arv* sae, Arv* sad)
{
	Arv* p = (Arv*)malloc(sizeof(Arv));
	p->info = c;
	p->esq = sae;
	p->dir = sad;
	return p;
}

int vazia(Arv* a)
{
	return a == NULL;
}

void imprimir(Arv* a)
{
	if (!vazia(a))
	{
		printf("%c ", a->info);
		imprimir(a->esq);
		imprimir(a->dir);
	}
}

void imprimir_arvore(Arv* a)
{
	printf("<");
	if (!vazia(a))
	{
		printf("%c ", a->info);
		imprimir_arvore(a->esq);
		imprimir_arvore(a->dir);
	}
	printf(">");
}

Arv* liberar(Arv* a)
{
	if (!vazia(a))
	{
		liberar(a->esq);
		liberar(a->dir);
		free(a);
	}
	return NULL;
}

int pertence(Arv* a, char c)
{
	if (vazia(a))
		return 0;
	
	return (a->info == c) || pertence(a->esq, c) || pertence(a->dir, c);
}
