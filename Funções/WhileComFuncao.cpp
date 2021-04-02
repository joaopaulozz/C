#include<stdio.h>
int busca(int x,int n, int v[]);
main()
{
int n=0;
int k;

scanf("%i",&n);
k = n-1;
while( k>= 0 && v[k] != x)
{
k -= 1;
}
return k;
}
