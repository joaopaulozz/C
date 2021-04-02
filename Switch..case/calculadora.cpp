/*
	Name: Calculadora.cpp
	Author: Joao Paulo Oliveira 
	Date: 12/03/18 13:46
	Description: Programa para realizar calculos matematicos basicos
*/

#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<windows.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	
	while(1){
		system("cls");
		puts("\nCalculadora Digital\n"); puts("==============");
	int opcao,fatorial,f,num=0,f1=0,f2=1,f3=0;
	opcao=0;
	fatorial=1;
	float a,b,result;a=b=result=0.0;
	
	puts("Escolha a operação \n1 - Adição \n2 - Subtração \n3 - Multiplicação \n4 - Divisão \n5 - Potencia \n6 - Fatorial ! \n7 - Teoria de Fibonacci");
	puts("============");
	printf("opção : "); scanf("%d",&opcao);
	
	switch(opcao){
		
		case 1 : printf("Primeiro número :"); scanf("%f",&a);
				 printf("Segundo  número :"); scanf("%f",&b);
				 
				 result = a + b;
				 printf("O resultado é : %.2f",result);
				 break;
				 
		case 2 : printf("Primeiro número :"); scanf("%f",&a);
				 printf("Segundo  número :"); scanf("%f",&b);
				 
				 result = a - b;
				 printf("O resultado é : %.2f",result);
				 break;
				 
		case 3 : printf("Primeiro número :"); scanf("%f",&a);
				 printf("Segundo  número :"); scanf("%f",&b);
				 
				 result = a * b;
				 printf("O resultado é : %.2f",result);
				 break;
				 
		case 4 : printf("Primeiro número :"); scanf("%f",&a);
				 printf("Segundo  número :"); scanf("%f",&b);
				 
				 result = a / b;
				 printf("O resultado é : %.2f \n",result);
				 break;
				 
		case 5 : printf("Base :"); scanf("%f",&a);
				 printf("Potência :"); scanf("%f",&b);
				 result = a;
				 for(int i = 1; i<b; i++)
				 {
				 	result = result * a;
				 }
				 printf("O resultado é : %.2f",result);
				 break;		 
				 	 		 	 
		case 6 : 
			printf("Digite um número para calcular o Fatorial :");
			scanf("%f",&a);
			
			printf("%.f!= ", a);
				int i;
				for (i = 1; a >= 1;a--)
				{
						i = a * i;
						printf(a==1?"%.d":"%.dx",a);
				}
		
			printf("=%d" ,i);
			
		case 7 :
	
		puts("Digite um numero : ");
		scanf("%d",&num);
	
		if(num <0){
		puts("Numero invalido !");
			      }
		else{
		printf(" Teoria de Fibonacci : 0 - 1 ");
		
		while(f2<num){
		f3=f2 + f1;
		printf(" - %d",f3);
		f1=f2;
		f2=f3;
				    }
		printf("\n");
		    }	
			 break;
		
		case 8 :
			if (opcao == 8){
			Sleep(5000);
			break;	
			}
		
		}//fim do switch
	
	}//fim do while		
	
}//fim do main
