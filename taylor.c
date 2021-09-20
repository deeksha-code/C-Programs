/*write a c program to compute sin(x) using taylor's series approximation.compare your result with built in library function.ptint both the results*/
#include<stdio.h>
#include<math.h>
void sinx(int degree);
void main()
{
	int degree;
	printf("Enter the degree\n");
	scanf("%d",&degree);
	sinx(degree);
}
void sinx(int degree)
{
	const float pi=3.14;
	int i;
	float x,num,deno,sum,term;
	x=degree*(pi/180);
	num=x;
	deno=1;
	sum=x;
	i=2;
	do
	{
		num=-(num*x*x);
		deno=deno*i*(i+1);
		term=num/deno;
		sum=sum+term;
		i=i+2;
	}while(fabs(term)>=0.000001);
	printf("calculated value of sin(%d) is %f\n",degree,sum);
	printf("Built in value of sin(%d) is %f\n",degree,sin(x));
}
