/*
	Name: 2 restantes
	Author: Joao Paulo Oliveira
	Date: 11/09/18 09:27
	Description: Ler um n�mero inteiro N . Imprima todos os n�meros entre 1 e 10000, que divididos por N dar�o o resto = 2.
*/
#include <stdio.h>
int main()
{
	int num=0;
	int i=1;
	scanf("%i",&num);
	
	while(i<10000)
	{
		if(i%num == 2)
		{
			printf("%i\n",i);
		}
		i++;
	}
	return 0;
}
