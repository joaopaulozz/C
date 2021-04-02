/*
	Name: Triangulo 
	Author: Joao Paulo Oliveira
	Date: 12/09/18 10:57
	Description: 
*/
#include <stdio.h>
int main()
{
    double A,B,C,D;
    scanf ("%lf %lf %lf", &A, &B, &C);
    if(A < (B+C) && B < (A+C) && C < (A+B))
    {
        printf("Perimetro = %.1lf\n", A+B+C);
	}
    else
    {
        D=(A+B)*C;
        printf("Area = %.1lf\n",D/2);
    }
    return 0;
}

