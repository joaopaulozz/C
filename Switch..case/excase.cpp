#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int opc=0;
	
	puts("Escolha uma opcao de pagamento, 1-Dinheiro / 2-Cheque / 3-Cartao / 4-Fiado : ");
	scanf("%i",&opc);
	
	switch (opc)
	{
		case 1 :
				printf("Você tera desconto de 15%");
				break;
		case 2 : 
				printf("Você tera desconto de 5%");
				break;
		case 3 : 
				printf("Você tera desconto de 10%");
				break;
		case 4 : 
				printf("Não vendemos fiado");
				break;
				
			default : printf("Opção invalida !");
			break;	
	}
	
}
