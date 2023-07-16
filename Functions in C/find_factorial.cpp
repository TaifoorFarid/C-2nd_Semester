#include<stdio.h>
int find_fact(int num);
main()
{
	int num;
	
	printf("Enter a number:\n");
	scanf("%d", &num);
	
	long int res = find_fact(num);
	
	printf("Fastorial of %d is %d", num, res);
}


int find_fact(int num)
{
	long int fac = 1;
	for(int i = num ; i > 1 ; i--)
	{
		fac = fac * i;
	}
	return fac;
}
