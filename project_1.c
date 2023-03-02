#include<stdio.h>
#include<conio.h>
int main()

{

int HalfDollars, Quarters, Dimes, Nickels, Pennies;
float HalfDollars1;
printf("Enter Half dollars:");
scanf("%d",&HalfDollars);

printf("Enter Quarters:");
scanf("%d", & Quarters);

printf("Enter Dimes:");
scanf("%d",&Dimes);

printf("Enter Nickels:");
scanf("%d", &Nickels);

printf("Enter Pennies:");
scanf("%d",&Pennies);

HalfDollars1=HalfDollars*0.50+Quarters*0.25 +Dimes*0.10  +Nickels*0.05 +Pennies*0.01;
printf("Total Dollars are: %.2f:" ,HalfDollars1);
return 0;

}
