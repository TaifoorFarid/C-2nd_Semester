#include<stdio.h>
main()
{
	float hours;
	printf("Please enter the time taken:\n");
	scanf("%f", &hours);
	
	if(hours >= 2 && hours <= 3)
    	printf("Congratulations! you are a highly efficient worker");
	else if(hours > 3 && hours <= 4)
    	printf("You are ordered to improve your speed");
    else if(hours > 4 && hours <= 5)
        printf("You need traning to improve your speed");
    else if(hours > 5)
        printf("Sorry! you have to leave the company");
    else
	    printf("sorry! I am not programmed according to your timing"); 
}
