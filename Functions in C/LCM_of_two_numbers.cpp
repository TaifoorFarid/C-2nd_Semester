#include<stdio.h>
#include<conio.h>
int find_LCM(int num1, int num2);
main()
{
	int num1, num2;
	
	printf("Enter two numbers:\n");
	scanf("%d%d", &num1, &num2);
	
	int res = find_LCM(num1, num2);
	
	printf("The LCM of %d and %d is %d", num1, num2, res);
}

int find_LCM(int num1, int num2)
{
	int large, ans, increment = 1;
	num1 > num2 ? large = num1 : large = num2;
	
	for(int i = large ; i <= num1*num2 ; i++)
	{
		increment++;
		if(i % num1 == 0 && i % num2 == 0){
		ans = i;
		break;
	    }
	}
	return ans;
}
