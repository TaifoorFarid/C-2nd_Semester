#include<stdio.h>
main()
{
	int number_1, number_2;
	printf("Enter two numbers:\n");
	scanf("%d %d", &number_1, &number_2);
	
	number_1 > number_2 ? printf("%d is greater", number_1) : printf("%d is greater", number_2);
}
