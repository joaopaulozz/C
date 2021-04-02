/*
	Name: IdadeEmDias
	Author: Joao Paulo Oliveira
	Date: 23/08/18 09:35
	Description: 
*/
#include <stdio.h>

main ()
{
	int anos,mes,dias,qd;

	scanf ("%d", &qd);

	anos=qd/365; 

	mes=(qd % 365)/ 30;

	dias=(qd % 365)% 30;
		
		printf ("%d ano (s)\n%d mes (es)\n%d dia (s)\n ", anos,mes,dias);

	return 0;
}

