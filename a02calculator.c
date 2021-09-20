// cprogram to solve simple computational problems using arithmetic expressions and use of each operator leading to a simulation of a commercial calculator
#include<stdio.h>
void main()
{
		int a,b,result; 
		char ch;
		printf("menu\n");
		printf("1.Addition\n2.substraction\n3.Multiplication\n4.Division\n5.Modulus\n");
	    printf("enter the choice");
	    scanf("%d",&ch);
		printf("Enter the two number");
		scanf("%d%d",&a,&b);
		switch(ch)
		{
				case 1:
				        result=a+b;
						printf("Sum of %d and %d is %d",a,b,result);
						break;
				case 2:
				        result=a-b;
						printf("Difference of %d and %d is %d",a,b,result);
						break;
			    case 3:
				        result=a*b;
						printf("Product of %d and %d is %d",a,b,result);
						break;
				case 4:
				         if(b==0)
					     {
					    	printf("Divide by zero error");
				    	 }
			            else     
		                 {
						     result=a/b;
							 printf("division of %d and %d is %d",a,b,result) ; 
				       	 } 
						break;
				case 5:
				         result=a%b;
						 printf("Remainder of %d and %d is %d",a,b,result);
						 break;
			    default:
				         printf("Invalid choice\n");
						 break;		
		}
}
