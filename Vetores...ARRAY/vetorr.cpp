/*
	Name:  
	Author: 
	Date: 11/04/18 09:18
	Description: 
*/
 
#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	float vet[5];
	float total=0;
	float media=0;
	
	printf("Digite 5 números : \n");	
	
		for(int i=0 ; i < 5 ; i++){
		scanf("%f", &vet[i]);
	}
	
		for(int i=0 ; i < 5 ; i++){
		total=total+vet[i];	
	}
		media=total/5;
		puts("");
		printf("Sua média é : %.2f",media);
}
