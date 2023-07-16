#include<stdio.h>
#include<conio.h>
int find_GCD(int num1, int num2);
main()
{
	int num1, num2;
	
	printf("Enter two numbers:\n");
	scanf("%d%d", &num1, &num2);
	
	int res = find_GCD(num1, num2);
	
	printf("GCD of %d and %d is %d", num1, num2, res);
}

int find_GCD(int num1, int num2)
{
	int small, ans;
	num1 < num2 ? small = num1 : small = num2;
	
	for(int i = small ; i > 0 ; i--)
		if(num1 % i == 0 && num2 % i == 0){
			ans = i;
            break;
		}
	return ans;
}
