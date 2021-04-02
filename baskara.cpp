/*
	Name: Baskara.cpp
	Author: Joao Paulo Oliveira
	Date: 18/06/18 14:27
	Description: Baskara
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float a,b,c,delta,x1,x2;
	
	printf("Digite 3 n�meros: ");
	scanf("%f %f %f",&a,&b,&c);
	
	delta = pow(b,2) - (4*a*c);
	
	if (delta == 0)
	{
		x1= (-b + sqrt(delta)) / (2*a);
		printf("A raiz deste equa��o �:",x1);
	}
    else if (delta < 0)
    	{
        printf("Esta equa��o n�o possui ra�zes reais");
    	}
    else
    {
        x1 = (- b + sqrt(delta)) / (2*a);
        x2 = (- b - sqrt(delta)) / (2*a);
        
        printf("As ra�zes da equa��o s�o %.2f e %.2f",x1,x2);
	}
}

