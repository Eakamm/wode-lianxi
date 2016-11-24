#include<stdio.h>
#define PI 3.1415927 
int main()
{
	double r,k;
	while(scanf("%lf",&r) !=EOF)
	{
		k=(4.0/3.0)*PI*r*r*r;
		printf("%.3lf\n",k);
	}
	return 0;
}
