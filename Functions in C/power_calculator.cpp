#include<stdio.h>
int power_calculator(int base, int power);
main()
{
	int base, power;
	
	printf("Enter base:\n");
	scanf("%d", &base);
	printf("Enter power:\n");
	scanf("%d", &power);
	
	int res = power_calculator(base, power);
	printf("%d^%d = %d", base, power, res);
}


int power_calculator(int base, int power)
{
	int answer = 1;
	for(int i = 1 ; i <= power ; i++)
	{
		answer = answer * base;
	}
	return answer;
}
