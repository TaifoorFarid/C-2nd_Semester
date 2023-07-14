#include<stdio.h>
main()
{
	int first_num , second_num;
	printf("Enter two numbers:\n");
	scanf("%d%d", &first_num , &second_num);
	
	if(second_num % first_num == 0)
	    printf("Yes first number is a factor of second");
	else
    	printf("No! first number is not a factor of second");
}
