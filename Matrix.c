/*c program to introduce 2D array manipulation and implement matrix multiplication and ensure the rules of multiplication are checked*/
#include<stdio.h>
void main() 
{
    int a[20][20], b[20][20], c[20][20], i, j, k, m, n, p, q;
    printf("enter the number of rows and columns of matrix a\n");
    scanf("%d%d",&m,&n);
    printf("enter the number of rows and columns of matrix b\n");
    scanf("%d%d",&p,&q);
    if(n==p)
    {
        printf("enter the elements of matrix a\n");
        for(i=0;i<m;i++)
        {
             for(j=0;j<n;j++)
             {
                   scanf("%d", &a[i][j]);
             }
        }
        printf("enter the elements of matrix b\n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
              scanf("%d", &b[i][j]);
            }
       }
        printf("matrix a is\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++) 
            {
                   printf("%d\t", a[i][j]);
            }
            printf("\n");
        }
        printf("matrix b is\n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                   printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<m;i++)
        {
             for(j=0;j<q;j++)
             {
                  c[i][j]=0;
                  for(k=0;k<n;k++)
                  {
                        c[i][j]=c[i][j]+a[i][k]*b[k][j];
                  }
             }
        }
        printf("matrix c is \n");
        for(i=0;i<m;i++)
        {
             for(j=0;j<q;j++)
             {
                     printf("%d\t",c[i][j]);
             }
             printf("\n");
        }
    }
    else
    {
          printf("matrix multiplication is not possible\n");
    }
}
