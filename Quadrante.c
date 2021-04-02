#include <stdio.h>
int main()
{
	while(1)
	{
	double X,Y;
	X=Y=0.0;
	
	scanf("%lf %lf",&X,&Y);

	if (X>0 &&Y>0)
		{
			printf("primeiro\n");
		}
	else if (X<0 && Y>0)
		{
			printf("segundo\n");
		}
	else if (X<0 && Y<0)
		{
			printf("terceiro\n");
		}
	else if (X>0 && Y<0)
		{
			printf("quarto\n");
		}
	else
		break;
	}
	
	return 0;
}


