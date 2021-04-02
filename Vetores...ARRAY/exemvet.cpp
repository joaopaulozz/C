#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int vet[5];
	int i=0;
	
	puts("Digite 5 números : ");
	
	for( i=0 ; i < 5 ;i++)	
	{
		scanf("%i",&vet[i]);
	}
	
	for(i=0 ; i < 5 ;i++)
	{
		printf("Posição %i : %i \n",i,vet[i]);
	}
}
