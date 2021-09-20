// c program to compute the roots of a quadratic equation by accepting coefficients and display the appropriate message
#include<stdio.h>
#include<math.h>
void  main()
{
		float a,b,c,delta,img,real,r1,r2;
		printf("enter the coefficients of quadratic equation");
		scanf("%f%f%f",&a,&b,&c);
		if(a==0)
		{
				printf("Equation is not a quadratic equation");
		}
		else
		{
				delta=(b*b)-(4*a*c);
		        if(delta==0)
		        {
		        	r1=-b/(2*a);
		        	r1=r2;
					printf("the root are real and equal\n");
					printf("Root1=%f\nRoot2=%f\n",r1,r2);	
				}
	        	else if(delta>0)
	        	{
		            r1=(-b+sqrt(delta))/(2*a);
		            r2=(-b-sqrt(delta))/(2*a);
			    	printf("the roots are real and distinct\n");
			    	printf("Root1=%f\nRoot2=%f\n",r1,r2);
		    	}
		        else
		        {
		        	real=-b/(2*a);
		        	img=(sqrt(fabs(delta)))/(2*a);
		        	printf(" the roots are complex and imaginary\n");
		        	printf("Root1=%f+i%f\n",real,img);
		        	printf("Root2=%f-i%f\n",real,img);
				}
		}
}
