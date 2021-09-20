/*Implement recursive function for binary to decimal conversion*/
#include<stdio.h>
int bintodec(int n)
{
          if(n==0)
          {
                    return 0;
          }
         else
          {
                      return(n%10)+bintodec(n/10)*2;
          }
}
void main() 
{
              int n, dec;
              printf("Enter the number\n");
              scanf("%d",&n);
              dec=bintodec(n);
              printf("Binary equivalent of decimal number is %d\n",dec);
}