
#include<stdio.h>
main()
{

int v[99];
int i=0;

for (int i=0;i < 99; i++){
    v[i] = 98 - i;
     printf("%i\n",v[i]);
    }
    
for (int i=0;i < 99; i++){
    v[i] = v[v[i]];
    printf("%i\n",v[i]);
    }
}
