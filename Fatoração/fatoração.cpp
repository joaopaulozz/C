

#include<stdio.h>
#include<conio.h>

main()
{
	int fat=0;
	int resp=1;
	
	printf("Digite um numero para calcular seu fatorial :");
	scanf("%i",&fat);
	
	for(fat; fat >= 1 ; fat--)
	{
		resp=fat*resp;

	}
		printf("%i", resp);
	
}//fim do programa
