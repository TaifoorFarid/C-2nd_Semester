#include<stdio.h>
main()
{
	int number;
	printf("Enter a number:\n");
	scanf("%d", &number);
	
	number % 2 == 0 ? printf("%d is even", number): printf("%d is odd", number);
}
