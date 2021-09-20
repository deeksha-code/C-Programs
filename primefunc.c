/*Implement using functions whether the given number is prime or not and display appropriate message*/
#include<stdio.h>
#include<stdlib.h>
int prime(int num);
void main() 
{
            int num, res;
            printf("Enter the number to check whether the given number is prime or not\n");
            scanf("%d",&num);
            if(num<=0)
            {
                    printf("Invalid number\n");
                    exit;
            }
            else if(num==1)
            {
                    printf("Given number is neither prime nor composite\n");
            }
            else
            {
                    res=prime(num);
                    if(res==0)
                    {
                             printf("%d is prime number\n",num);
                    }
                    else 
                    {
                             printf("%d is not a prime number\n",num); 
                    }
            }
}
int prime(int num) 
{
          int i,res;
          for(i=2;i<num/2;i++)
          {
                     if(num%i==0)
                     {
                               res=1;
                               break;
                     }
                     else
                     {
                               res=0;
                     }
           }
           return res;
           
}
            
            

   