#include<stdio.h>
void print_perfect_number(int l_limit, int U_limit);
main()
{
	int l_limit, u_limit;
	
	printf("Enter lower limit: \n");
	scanf("%d", &l_limit);
	printf("Enter upper limit: \n");
	scanf("%d", &u_limit);
	
	print_perfect_number(l_limit, u_limit);
}
	

void print_perfect_number(int l_limit, int u_limit)
{
	for(int i = l_limit ; i <= u_limit ; i++)
	{
		int count = 1;
		for(int j = 2 ; j <= i/2 ; j++)
		{
			if(i % j == 0)
			count = count + j;
		}
		if(count == i)
		printf("%d, ", i);
	}
}
