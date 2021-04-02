#include <stdio.h>
int main()
{
	int num=0; int i=0;
	int x=0;
	
	scanf("%i",&num);
	
	while(i<num)
	{	
		scanf("%i",&x);
		if(x < 0 && x % 2 != 0)
			printf("ODD NEGATIVE\n");
				
		else if(x < 0 && x % 2 == 0) 	
			printf("EVEN NEGATIVE\n");
		
		else if(x > 0 && x % 2 != 0)
			printf("ODD POSITIVE\n");
		
		else if(x > 0 && x % 2 == 0)
			printf("EVEN POSITIVE\n");
			
		else if(x == 0)
			printf("NULL\n");
		
		i++;
	}
	return 0;
}
