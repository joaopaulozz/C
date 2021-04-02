#include <stdio.h>

int main()

{
	int n1,n2;
	
	scanf("%i %i",&n1,&n2);
	
	if (n1 > n2)
	{
		while(n2 < n1)
			{
				if (n2 % 5 == 2 || n2 % 5 == 3)
					printf("%i\n",n2);
			
			n2++;
			}
	}
	else if (n2 > n1)
	{
		while(n1 < n2)
			{
				if (n1 % 5 == 2 || n1 % 5 == 3)
					printf("%i\n",n1);
			
			n1++;
			}
	}
	return 0;
}
