/*
	Name: 
	Author: Joao Paulo Oliveira
	Date: 11/09/18 15:21
	Description: 
*/
#include <stdio.h>
int seg(int,int,int,int);
void showR(int);

int main()
{
	int d,h,m,s;
	int t1,t0,dt;
	char aux[5];
	
	scanf("%s %i",&aux,&d);//dias
	scanf("%i %s %i %s %i",&h,&aux,&m,&aux,&s);
	t0=seg(d,h,m,s);
	
	scanf("%s %i",&aux,&d);//dias
	scanf("%i %s %i %s %i",&h,&aux,&m,&aux,&s);
	t1=seg(d,h,m,s);
	
	dt=t1-t0;
	
	showR(dt);
	
	return 0;
}
//FUNCOES
int seg(int d,int h, int m, int s)
{
	return s+(60*m)+(60*60*h)+(24*60*60*d);
}
void showR(int dt)
{	
	int d,h,m,s;
	s=dt%60;
	dt=(int)dt/60;
	m=dt%60;
	dt=(int)dt/60;
	h=dt%24;
	d=(int)dt/24;
	printf("%i dias(s)\n",d);
	printf("%i hora(s)\n",h);
	printf("%i minuto(s)\n",m);
	printf("%i segundo(s)\n",s);
}
