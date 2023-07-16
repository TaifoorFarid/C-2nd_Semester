#include<stdio.h>
#include<math.h>
float find_sqrt(int num);
main()
{
	int num;
	
	printf("Enter a number:\n");
	scanf("%d", &num);
	
	float res = find_sqrt(num);
	printf("Square root of %d is %f", num, res);
}


float find_sqrt(int num)
{
	return sqrt(num);
}
