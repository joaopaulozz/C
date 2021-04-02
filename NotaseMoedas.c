#include <stdio.h>
int main()
{
	double n=0.0; double resto=0.0;
	
	scanf("%lf",&n);
	
	resto=n%100;
	
	printf("%lf\n",resto);
	printf("%lf\n",resto / 50);
	printf("%lf\n",resto / 20);
	printf("%lf\n",resto / 10);
	printf("%lf\n",resto / 5);
	
	
	
	return 0;
}
