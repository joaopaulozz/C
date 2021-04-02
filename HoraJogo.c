#include <stdio.h>
int main()
{
	int n1,n2,r1,r2;
	n1=n2=r1=r2=0;
	
	scanf("%i %i",&n1,&n2);
	
	if(n1>n2)
	{
		r1=((n1-24)*-1)+n2;
		printf("O JOGO DUROU %i HORA(S)\n",r1);
	}
	else if(n2>n1)
	{
		r2=n2-n1;
		printf("O JOGO DUROU %i HORA(S)\n",r2);
	}
	else
		printf("O JOGO DUROU 24 HORA(S)\n");
	
	return 0;
}
