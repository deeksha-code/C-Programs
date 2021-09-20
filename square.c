/*c program to find square root of a given number*/
#include<stdio.h>
void main()
{
	int n,a,b;
	printf("enter the number\n");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("square root is not possible");
	}
	else
	{
		a=n;
		do
		{
			b=a;
			a=(a+(n/a))/2;
		}while(a!=b);
		printf("square root of %d is %d\n",n,a);
	}
}
