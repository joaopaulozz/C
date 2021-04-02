/*
	Name: TiposTriangulos
	Author: Joao Paulo Oliveira
	Date: 11/09/18 16:35
	Description: 
*/
#include <stdio.h>

void qt (float, float, float);

int main()
{	
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	
	qt(a,b,c);
	
	return 0;
}
void qt (float a, float b, float c)
{
	if (a >= (b+c))
		printf("NAO FORMA TRIANGULO\n");
	if ((a*a) == (b*b)+(c*c))
		printf("TRIANGULO RETANGULO\n");
	if (a*a > b*b + c*c)
		printf("TRIANGULO OBTUSANGULO\n"); 
	if ((a*a) < (b*b)+(c*c))
		printf("TRIANGULO ACUTANGULO\n");
	if (a == b && b == c)
        printf("TRIANGULO EQUILATERO\n");
    if (a == b && b != c)  
        printf("TRIANGULO ISOSCELES\n");
	if  (a == c && c != b)
		printf("TRIANGULO ISOSCELES\n");
}
