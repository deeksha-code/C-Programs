/*c program to implement structures to read, write, compute average marks and the students scoring above and below the average for a class of N students*/
#include<stdio.h>
struct student
{
            char name[20],rollno[20];
            int marks;
};
void main() 
{
            struct student s[20];
            int i,n,sum=0;
            float avg;
            printf("Enter the number of students\n");
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
                     printf("Enter the student %d details are\n",i+1);
                     printf("Enter the name,rollno and marks\n");
                     scanf("%s%s%d",s[i].name,s[i].rollno,&s[i].marks);
                     sum=sum+s[i].marks;
            }
            avg=sum/n;
            printf("average of student mark is %f\n",avg);
            printf("student details are\n name\t rollno\t marks\n");
            for(i=0;i<n;i++)
            {
                      printf("%s\t%s\t%d\n",s[i].name,s[i].rollno,s[i].marks);
            }
            printf("the student details above the average is\n");
            printf("name\t rollno\t marks\n");
            for(i=0;i<n;i++)
            {
                      if(avg<s[i].marks)
                      {
                              printf("%s\t%s\t%d\n",s[i].name,s[i].rollno,s[i].marks);
                      }
            }
            printf("the student details below the average is\n");
            printf("name\t rollno\t marks\n");
            for(i=0;i<n;i++)
            {
                      if(avg>s[i].marks)
                      {
                              printf("%s\t%s\t%d\n",s[i].name,s[i].rollno,s[i].marks);
                      }
            }
}
