/*c program to introduce ID array manipulation and  implement binary search*/
#include<stdio.h>
void main() 
{
    int a[20],i, n, low, high, found=0, mid, key;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the elements of array in ascending order\n");
    for(i=0;i<n;i++)
    {
          scanf("%d",&a[i]);
    }
    printf("enter the key elements\n");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
             mid=(low+high)/2;
             if(a[mid]==key)
             {
                      found=1;
                      break;
             }
             else if(a[mid]>key) 
             {
                      high=mid-1;
             }
             else
             {
                      low=mid+1;
             }
     }
     if(found==1)
     {
              printf("key element %d is found in the position %d\n",key,mid+1);
     }
     else
     {
              printf("key element %d is not found",key);
     }
}
    
            
         