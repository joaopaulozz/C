/*
	Name: Matriz.cpp
	Author: Joao Paulo Oliveira 
	Date: 02/04/18 13:43
	Description: Programa feito para demonstrar a utilizacao de matrizes(ARRAY) bi-dimensionais como estruturas para armazenar dados 
*/

#include<stdio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int mat[3][3]; //matriz quadrada de ordem 3
	int lin, col; //indices para navegar entre os enderecos da matriz
	lin=col=0;
	
	puts("Digite 9 números para carregar a matriz :");
	
	do{
		
		do{
			scanf("%i", &mat[lin][col]);
			col++;			
		}while(col <= 2);
		
	lin++;
	col=0;	
	}while(lin <= 2);
	
	puts("Matriz carregada! \n");
	
	puts("Imprimindo a matriz :");
	lin=0;
	while(lin <= 2){
		
			while(col <= 2){
				//printf("mat[%i][%i] = %i \n",lin,col, mat[lin][col]);
				printf("%i\t", mat[lin][col]);
				col++;
				}
	lin++;
	col = 0;
	puts("");
	}
	
	puts("Elemtos da Diagonal Principal (DP) : ");//1
	for(lin=0; lin<3; lin++){
				for(col=0; col<3; col++){
					if(lin == col)	
						printf("%i \n", mat[lin][col]);	
				}
	}
	puts("");
	
	 puts("Elementos da Diagonal Segundaria (DS) : \n");//Do..While
	lin=0;
	do{
		do{
			scanf("%i", &mat[lin][col]);
			col++;	
			
		}while(col <= 2);
		
	lin++;
	col=0;	
	}while(lin <= 2);
	puts("");
	
	puts("Elementos acima da DP : \n");//While...For
	lin=0;
	while(lin <= 2){
		
			for(col=0;col<3;col++){
				if(lin<col);
				printf("%i",mat[lin][col]);
			}
	lin++;
	col = 0;
	}
	puts("");
	
	/*puts("Elementos abaixo da DP : \n");//for...do...while
	for(){
		do{
			
		}while;		
     	 	
	}
	puts("");
	
	puts("Elementos acima da Diagonal Primaria :")//do..while/while
	
	puts("Elementos abaixo da Diagonal principal")//while/for*/

}//fim do programa


