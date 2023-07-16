#include<stdio.h>
main()
{
	int num1;
	printf("Enter 1st number: ");
	scanf("%d", &num1);
	int num2;
	printf("Enter 2st number: ");
	scanf("%d", &num2);
	int *n1, *n2;
	n1 = &num1;
	n2 = &num2;
	printf("Sum = %d", *n1+*n2);
}
