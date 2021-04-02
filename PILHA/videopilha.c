#include <stdio.h>
#include <stdlib.h>
#define tam 5

typedef struct {
	int item[tam];
	int topo;
}Tpilha;

void Tpilha_inicio (Tpilha *p) {
	p->topo = -1;
}

int Tpilha_vazia (Tpilha *p){
	if (p->topo == -1){
		return 1;
	}
	else{
		return 0;
	}
}

int Tpilha_cheia (Tpilha *p){
	if (p->topo == tam-1){
		return 1;}
	else {
		return 0;
	}
}
