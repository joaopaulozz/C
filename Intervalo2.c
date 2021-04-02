#include <stdio.h>
int main()
{
	int num=0; int i=0;
	int in,out;
	in=out=0;
	int x=0;
	
	scanf("%i",&num);
	
	while(i<num)
	{	
		scanf("%i",&x);
		if(x < 0 || x > 20)
		{
			out++;
		}
		else
			in++;
		
	i++;
	}
	printf("%i in\n",in);
	printf("%i out\n",out);
	
	return 0;
}
