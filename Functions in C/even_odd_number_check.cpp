#include<stdio.h>
int odd_even_check(int num);
main()
{
	int bilal;
	
	printf("Enter a number:\n");
	scanf("%d", &bilal);
	
	int res = odd_even_check(bilal);
	
	res == 1 ? printf("Number is even") : printf("Number is odd");
}


int odd_even_check(int num)
{
	return num % 2 == 0 ? 1 : 0;
}
