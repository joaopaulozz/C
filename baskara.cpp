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
	
	printf("Digite 3 números: ");
	scanf("%f %f %f",&a,&b,&c);
	
	delta = pow(b,2) - (4*a*c);
	
	if (delta == 0)
	{
		x1= (-b + sqrt(delta)) / (2*a);
		printf("A raiz deste equação é:",x1);
	}
    else if (delta < 0)
    	{
        printf("Esta equação não possui raízes reais");
    	}
    else
    {
        x1 = (- b + sqrt(delta)) / (2*a);
        x2 = (- b - sqrt(delta)) / (2*a);
        
        printf("As raízes da equação são %.2f e %.2f",x1,x2);
	}
}

