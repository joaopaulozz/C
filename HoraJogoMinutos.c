/*
	Name: HoraJogoMinutos
	Author: Joao Paulo Oliveira
	Date: 24/09/18 16:30
	Description: 
*/
#include <stdio.h>
int main()
{
	int h1,h2,m1,m2,horas1,horas2,res,res1,min;
		
	scanf("%i %i %i %i",&h1,&m1,&h2,&m2);
	
	
	horas1=(h1*60)+m1;
	horas2=(h2*60)+m2;
	
	res=(horas1+horas2);
	res1=(res/60);
	
	min=(res%60);
	
	printf("O JOGO DUROU %i HORA (S) E %i MINUTO (S)\n",res1,min);
	
	
	return 0;
}
