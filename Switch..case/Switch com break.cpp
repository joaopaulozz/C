#include<stdio.h>
#include<conio.h>
main()
{
		
	int opcao;
	float sal,saln;
	
	printf("Digite seu salario atual: "); scanf("%f",&sal);
	
	puts("Escolha o codigo do cargo \n 1 - 101  \n2 - 102 \n3 - 103 \n");
	puts("");
	printf("opcao: "); scanf("%d",&opcao);
	
	switch(opcao){
		
			case 101 : saln = sal+((10 * 1000)/100 );
				printf("Salario novo: %.2f",saln);
	
				 break;
				 
			case 102 : saln = sal+(sal * 0,75);
				printf("Salario novo: %.2f",saln);
	
				 break;
				 
			case 103 : saln = sal+(sal * 0,10);
				printf("Salario novo: %.2f",saln);
	
				 break;
				}
			}
