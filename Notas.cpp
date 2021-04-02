/*
	Name: Notas
	Author: Joao Paulo Oliveira
	Date: 25/08/18 14:27
	Description: 
*/
#include<stdio.h>
main()
{
    int valor = 0;
    int troco = 0;
    int cinquenta , vinte , dez , cinco , dois , um; 
    int cem=0;
    scanf("%d",&troco);
    
    valor = troco;
    
    cem = troco / 100;
    troco %= 100;

    cinquenta = troco / 50;
    troco %= 50;

    vinte = troco / 20;
    troco %= 20;

    dez = troco / 10;
    troco %= 10;

    cinco = troco / 5;
    troco %= 5;

    dois = troco / 2;
    troco %= 2;
    
    um=troco;
	
	printf("%d\n",valor);
    printf("%d nota(s) de R$ 100,00\n",cem);
    printf("%d nota(s) de R$ 50,00\n",cinquenta);
    printf("%d nota(s) de R$ 20,00\n",vinte);
    printf("%d nota(s) de R$ 10,00\n",dez);
    printf("%d nota(s) de R$ 5,00\n",cinco);
    printf("%d nota(s) de R$ 2,00\n",dois);
    printf("%d nota(s) de R$ 1,00\n",um);

    return 0;

}
