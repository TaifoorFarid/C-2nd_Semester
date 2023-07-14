#include<stdio.h>
#include<stdlib.h>
int main()
{
	char first_name[20], last_name[20], id[20];
	int unit, bill;
	float surcharge;
	
	printf("Enter your first name:\n");
	scanf("%s", first_name);
	
	printf("Enter your last name:\n");
	scanf("%s", last_name);
	
	printf("Enter your id:\n");
	scanf("%s", &id);
	
	printf("Enter units consumed:\n");
	scanf("%d", &unit);
	
	printf("\nName: %s %s\nID: %s\nUnits consumed: %d", first_name, last_name, id, unit);
	
	if(unit >= 1 && unit < 200)
	{
		bill = unit * 1.20;
		if(bill > 400)
		{
			surcharge = (bill/100)*15;
			bill = surcharge + bill;
			printf("\n%f Rs is your surcharges.",surcharge);
			printf("\nAfter adding your surcharges");
		}
	    if(bill < 100)
	    {
	    printf("\nYour bill is 100 Rs");
	    exit(0);
	    }
	    printf("\nYour bill is: %d Rs", bill);
	}
	else if(unit >= 200 && unit < 400)
	{
		bill = unit * 1.50;
		if(bill > 400)
		{
			surcharge = (bill/100)*15;
			bill = surcharge + bill;
			printf("\n%f Rs is your surcharges.", surcharge);
			printf("\nAfter adding your surcharges");
		}
	    if(bill < 100)
	    {
	    printf("\nYour bill is 100 Rs");
	    exit(0);
	    }
	    printf("\nYour bill is: %d Rs", bill);
	}
	else if(unit >= 400 && unit < 600)
	{
		bill = unit * 1.80;
		if(bill > 400)
		{
			surcharge = (bill/100)*15;
			bill = surcharge + bill;
			printf("\n%f Rs is your surcharges.", surcharge);
			printf("\nAfter adding your surcharges");
		}
	    if(bill < 100)
	    {
	    printf("\nYour bill is 100 Rs");
	    exit(0);
	    }
	    printf("\nYour bill is: %d Rs", bill);
	}
	else if(unit > 600)
	{
		bill = unit * 2;
		if(bill > 400)
		{
			surcharge = (bill/100)*15;
			bill = surcharge + bill;
			printf("\n%f Rs is your surcharges.", surcharge);
			printf("\nAfter adding your surcharges");
		}
	    if(bill < 100)
	    {
	    printf("\nYour bill is 100 Rs");
	    exit(0);
	    }
	    printf("\nYour bill is: %d Rs", bill);
	}
	else
	printf("You have entered wrong units");
}
