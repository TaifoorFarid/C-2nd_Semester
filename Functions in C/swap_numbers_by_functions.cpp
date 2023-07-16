#include<stdio.h>
int swap(int num1, int num2);
main()
{
	int num1, num2;
	
	printf("Enter two numbers:\n");
	scanf("%d%d", &num1, &num2);
	
	printf("Before swapping \nnum1 = %d\nnum2 = %d\n", num1, num2);
	
	int res = swap(num1, num2);
	
	printf("After swapping \nnum1 = %d\nnum2 = %d\n", res/num1, res/num2);
}


int swap(int num1, int num2)
{
	int product = num1*num2;
	return product;
}
