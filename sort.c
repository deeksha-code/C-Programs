/*c program to sort the given set of n numbers using bubble sort*/
#include<stdio.h>
void main() 
{
       int a[50],i, j, temp, n;
       printf("Enter the number of elmements\n");
       scanf("%d", &n);
       printf("Enter the elements of array\n");
       for(i=0;i<n;i++)
       {
            scanf("%d",&a[i]);
       }
       printf("Before sorting\n");
       for(i=0;i<n;i++)
       {
            printf("%d\t",a[i]);
       }
       printf("\n");
       for(i=0;i<n;i++)
       {
             for(j=0;j<n-i-1;j++)
             {
                if(a[j]>a[j+1])
                {
                      temp=a[j];
                      a[j]=a[j+1];
                      a[j+1]=temp;
                }
             }
       }
       printf("After sorting\n");
       for(i=0;i<n;i++)
       {
              printf("%d\t",a[i]);
       }
}
    
    
        