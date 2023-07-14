#include<stdio.h>
main()
{
	int prime, count = 0, check;
	printf("Enter a number to check weather the number is prime or not:\n");
	scanf("%d", &prime);
	
	while(check <= prime)
	{
		if( prime % check == 0)
		count = count + 1;
		check++;
	}
	if(count == 2)
	printf("%d is prime", prime);
	else
	printf("%d is not prime", prime);
}
