#include <stdio.h>
#include "pilha.h"

int main()
{
	Pilha* p = cria();
	push (p, 4);
	push (p, 5);
	push (p, 6);
	imprime(p);
	pop(p);
	imprime(p);
	return 0;

}
