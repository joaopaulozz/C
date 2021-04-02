/*
	Name: 2 restantes
	Author: Joao Paulo Oliveira
	Date: 11/09/18 09:27
	Description: Ler um número inteiro N . Imprima todos os números entre 1 e 10000, que divididos por N darão o resto = 2.
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
