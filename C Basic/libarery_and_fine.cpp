#include<stdio.h>
main()
{
	int days;
	printf("How many days you are late?:\n");
	scanf("%d", &days);
	
	if(days >= 1 && days <= 5)
        -printf("As you are %d days late.\nYour fine is 50 paise.", days);
	else if(days > 5 && days <= 10)
    	printf("As you are %d days late.\nYour fine is 1 Rs.", days);
    else if(days > 10 && days <= 30)
        printf("As you are %d days late.\nYour fine is 5 Rs.", days);
    else if(days > 30)
        printf("As you are %d days late.\nYour menbership is now cancled.", days);
    else
	    printf("Sorry but days cannot be negative.");
}
