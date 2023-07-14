#include<stdio.h>
main()
{
	int age, gender, location, health;
	
	printf("What is your age?.\n");
	scanf("%d", &age);
	
	printf("Select your gender.\n");
	printf("1. Male.\n");
	printf("2. Female.\n");
	printf("3. Other.\n");
	scanf("%d", &gender);
	
	printf("Tell me about your location.\n");
	printf("1. city.\n");
	printf("2. Village.\n");
	scanf("%d", &location);
	
	printf("Tell me about your health condition.\n");
	printf("1. Excellent.\n");
	printf("2. Poor.\n");
	scanf("%d", &health);
	
	if( health == 1 && (age >= 25 && age <=35) && location == 1 && gender == 1 )
	{
    	printf("You are insured.\n");
    	printf("4 Rs per thousand is your premium.\n");
    	printf("2 lakhs is maximum amount for which you are insured.\n");
    }
    else if( health == 1 && (age >= 25 && age <=35) && location == 1 && gender == 2 )
    {
    	printf("You are insured.\n");
    	printf("3 Rs per thousand is your premium.\n");
    	printf("1 lakhs is maximum amount for which you are insured.\n");
	}
	else if( health == 2 && (age >= 25 && age <=35) && location == 2 && gender == 1 )
    {
    	printf("You are insured.\n");
    	printf("6 Rs per thousand is your premium.\n");
    	printf("10,000 Rs is maximum amount for which you are insured.\n");
	}
	else
	printf("Sorry, you are not eligible for insurance.");
}
