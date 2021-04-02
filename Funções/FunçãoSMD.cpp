#include <stdio.h>
#include <math.h>

float raiz(int);
int somar(int,int);
float dividir(int,int);
int multi(int,int);

main()
{
	int soma,a,b,mul,multip;
	float divi,r;
	int i=0;
	
	printf("Digite A: "); scanf("%i",&a);
	printf("Digite B: "); scanf("%i",&b);
	printf("\n");
	
	r = raiz(a);
	printf("RAIZ de A = %.2f\n",r);
	
	soma = somar(a,b);
	printf("SOMA = %i\n",soma);
	
	divi = dividir(a,b);
	printf("DIVISAO = %.2f\n",divi);
	
	mul = multi(a,b);
	printf("MULTIPLICACAO = %i\n",mul);

	}	
float raiz(int f)
{
	return sqrt(f);
}

int somar(int x, int y)
{
	return x + y;
}

float dividir(int f,int o)
{
	return float(f / o);
}

int multi(int n, int m)
{
	return n * m;
}
