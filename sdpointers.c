/*c program using pointers to compute the sum, mean and standard deviation  of all elements stored in an array of n real numbers*/
#include<stdio.h>
void main() 
{
         int n,i;
         float a[20],sum=0,mean,var=0,sumstd,sd;
         float *ptr;
         printf("Enter the number of elements\n");
         scanf("%d",&n);
         printf("Enter the elements of array");
         for(i=0;i<n ;i++)
         {
                    scanf("%f",&a[i]);
         }
         ptr=&a[0];
         for(i=0;i<n ;i++)
         {
                   sum= sum+*ptr;
                   ptr++;
         }
         mean=sum/n;
         ptr=&a[0];
         for(i=0;i<n ;i++)
         {
                 var=var+pow((*ptr-mean),2);
                 ptr++;
         }
         sumstd=var/n;
         sd=sqrt(sumstd);
         printf("sum of all elements is%f\n",sum);
         printf("mean of all elements is%f\n",mean);
         printf("standard deviation of all elements is %f\n",sd);
}
        
          