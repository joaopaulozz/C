#include <stdio.h>

int main()
{
	printf("P2\n");
	
	int lar,alt;
	lar=alt=8;
	
	int i,j;
	printf("%i\t%i\n",lar,alt);
	printf("%i\n",10);
	
	for(i=1; i < alt ;i++){
		for(j=1; j < lar ;j++)
	{
			if((i % 2 == 0 && j % 2 == 0)||(i % 2 == 1 && j % 2 == 1 ))
			printf("%i\t",10);

			else
			printf("%i\t",0);
	}		
		printf("\n");
	}
	return 0;
}
