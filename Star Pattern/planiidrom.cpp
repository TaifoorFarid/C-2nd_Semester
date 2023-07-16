#include<stdio.h>
main()
{
	int num, freez;
	int result = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	freez = num;
	
	while(num > 0)
	{
		int dig = num % 10;
		result = dig + (result * 10);
		num = num / 10; 
	}
	if( freez == result)
	printf("%d = %d\nPlanidrome", freez, result);
	else
	printf("%d = %d\nNot Planidrome", freez, result);
}
