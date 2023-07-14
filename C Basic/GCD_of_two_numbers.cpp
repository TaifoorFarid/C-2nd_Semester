#include<stdio.h>
#include<conio.h>
main()
{
	int num1, num2, divisor;
	
	printf("Enter two numbers:\n ");
	scanf("%d %d", &num1, &num2);
	
	divisor = num1;
	if(divisor > num2)
	divisor = num2;
		
	while(divisor > 0)
	{
		if( (num1 % divisor == 0) && (num2 % divisor == 0) )
		break;
		divisor--;
	}
	printf("%d is GCD(Greatest common divisor) of %d and %d", divisor, num1, num2);
}
