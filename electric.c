/*c program to compute electricity bill as the details given below:
         units                 cost
         200 units             80 paise/unit
         next 100units         90 paise/unit
         beyond 300 units       Rs 1/unit
-Rs.100 is the minimum amount that is charged to every user
-If the total charge is more than 400 then additional surcharge of 15% of the total amount is charged
-Also display the name of the user,number of units consumed and print the required charges */
#include<stdio.h>
void main()
{
		char name[10];
		int min;
		float units,amount;
		printf("Enter the name of the user\n");
		scanf("%s",&name);
		printf("enter the number of units consumed\n");
		scanf("%f",&units);
		min=100;
		if(units>=0&&units<=200)
		{
			amount=min+(units*0.8);
		}
		else if(units>=201&&units<=300)
		{
			amount=min+(200*0.8)+((units-200)*0.9);
		}
		else
		{
			amount=min+(200*0.8)+(100*0.9)+((units-300)*1);
		}
		if(amount>400)
		{
			amount=amount+(amount*0.15);
		}
	    printf("name of the user is %s\n units consumed %f\n electricity bill generated for %f is %f ",name,units,units,amount);
}
