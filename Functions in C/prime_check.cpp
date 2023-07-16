#include<stdio.h>
int prime_cal(int num);
main()
{
	int num;
	
	printf("Enter a number:\n");
	scanf("%d", &num);
	
	int res = prime_cal(num);
	
	res == 1 ? printf("Number is prime") : printf("Number is not prime");
}


int prime_cal(int num)
{
	int count = 0;
	for(int i = num/2 ; i > 1 ; i--)
	{
		if(num % i == 0)
		count++;
	}
	return count == 0 ? 1 : 0;
}
