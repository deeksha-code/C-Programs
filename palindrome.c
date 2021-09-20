//c program to check whether the given number is palindrome or not
#include<stdio.h>
void main()
{
	int n,rev=0,rem,num;
	printf("Enter the number to check palindrome");
	scanf("%d",&n);
	num=n;
	while(n>0)
	{
		rem=n%10;
		n=n/10;
		rev=(rev*10)+rem;
	}
	printf("Reverse value of %d is %d\n",num,rev);
    if(num!=rev)
	{
		printf(" The given number is not a palindrome");
	}
	else
	{
    	printf("The given number is a palindrome");
	}
	
	
}
