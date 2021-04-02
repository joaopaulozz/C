	//Name: Fibonacci.cpp
	//Author: Joao Paulo Oliveira
	//Date: 19/03/18 20:48
	//Description: Imprimir a sequencia de Fibonacci

#include<stdio.h>
#include<conio.h>

main()
{
	int num=0;
	int n1=0;
	int	n2=1;
	int	n3=0;
	
	puts("Ate que geracao de Fibonacci vc quer ver : ");
	scanf("%d",&num);
	
	if(num <0){
		puts("Numero invalido !");
			  }
	else{
		printf(" Teoria de Fibonacci : 0 - 1 ");
		
		while(n2<num){
		n3=n2 + n1;
		printf(" - %d",n3);
		n1=n2;
		n2=n3;
				     }
		printf("\n");
		}
	
	
}//fim do main
		

