#include<stdio.h>
main()
{
	int number;
	printf("Enter a numbers:\n");
	scanf("%d", &number );
	
	if(number % 2 == 0)
    	printf("%d is even", number );
	else
    	printf("%d is odd", number );
}
