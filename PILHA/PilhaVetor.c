#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

#define N 50

struct pilha{
	int n;
	float vet[N];
};

Pilha* cria(void){
	Pilha* p = (Pilha*) malloc(sizeof(Pilha));
	p->n = 0;
	return p;
}

void push (Pilha* p, float v){
	if (p->n == N){
		printf("Capacidade estourou\n");
		exit(1);
	}
	v = p->vet[p->n];
	p->n++;

}
float pop (Pilha* p){
	float v;
	if (vazia(p))
	{
		printf("Pilha vazia\n");
		exit(1);
	}
	v=p->vet[p->n-1];
	p->n--;
	return v;
}
int vazia (Pilha* p){
	return (p->n == 0);
}
void libera (Pilha* p){
	free(p);
}
void imprime (Pilha* p){
	int i;
	printf("-----------------\n");
	for(i=p->n-1; i>=0; i--)
	{
		printf("|%-15f|\n",p->vet[i]);
		printf("-----------------\n");
	}
}



