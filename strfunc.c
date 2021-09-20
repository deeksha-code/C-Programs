#include <stdio.h>
#include<stdlib.h>
#include<string.h>
void compare(char str1[20],char str2[20]);
void concatinate(char str1[20],char str2[20]);
int length(char str1[20]);
void main()
{
    char str1[20];
    char str2[20];
    int choice, len;
    printf("Menu items are\n1.Compare\n2.Concatenate\n3.Length\n4.Exit\n");
    
    while(1)
    {
    printf("Enter your choice\n");

    scanf("%d",&choice);

    
        switch(choice)
        {
        case 1:
            printf("enter string 1:");
            scanf("%s", str1);
            printf("enter string 2:");
            scanf("%s",str2);

            compare(str1,str2);
            break;
        case 2:
            printf("enter string 1:");
            scanf("%s", str1);
            printf("enter string 2:");
            scanf("%s", str2);
            concatenate(str1,str2);
            break;
        case 3:
            printf("enter the string:");
            scanf("%s", str1);
            len=length(str1);
            printf("length of string is %d\n", len);
            break;
        case 4:
            exit(0);
        default:
            printf("invalid input \n");
        }
    }
}
void compare(char str1[20], char str2[20])
{
    int i=0, flag=1,Len1=0,Len2=0;
    Len1=length(str1);
    Len2=length(str2);
    if(Len1==Len2)
    {
        for(i=0; str1[i]!='\0'; i++)
        {
            if(str1[i]!=str2[i])
            {
                flag=1;
                break;

            }
            else
            {
                flag=0;
            }
        }
    }
    else
    {
        flag=1;
    }

    if(flag==0)
    {
        printf("string 1 and string 2 are equal\n");
    }
    else
    {
        printf("string 1 and string 2 are not equal\n");
    }
}
void concatenate(char str1[20],char str2[20])
{

    int i=0, j=0;
    while(str1[i]!='\0')
    {
        i++;
    }
    
    while(str2[j]!='\0')
    {
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
    printf("\n concatenated string is %s\n",str1);
}
int length(char str1[20])
{
    int i,count=0;
    for(i=0; str1[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}