/*
	Name: MultiplaEscolha.cpp
	Author: João Paulo Oliveira
	Date: 28/02/18 16:51
	Description: Programa para apresentar a estrutura switch...case na tomada de decisão 
*/

#include<stdio.h>
#include<conio.h>

main()
{
	while(1)
	{
		
	int opc=0;
	puts("Escolha sua opcao: \n1 - Fatec\n2 - Eleicao\n3 - Mundial\n4 - Chuva\n5 - Sair...");
	puts("------------");
	printf("Opcao: "); scanf("%i",&opc);
		
		switch(opc)
		{
			case 1 : puts("A melhor faculdade do estado de SP");
					 break;
					 
		    case 2 : puts("Tiririca para presidente");
		    		 break;
		    		 
			case 3 : puts("Palmeiras nao tem mundial");
					 break;
					 
			case 4 : puts("Esta chovendo");
					 break;
					 
			case 5 : 
			 break;	
				 
			default : puts("Escolha invalida!");		 		 
		}// fim do switch
			if(opc == 5)
				break;		
	}
}// fim do main

