#include<stdio.h>
main()
{
	int first_num , second_num;
	printf("Enter two numbers:\n");
	scanf("%d%d", &first_num , &second_num);
	
	if( first_num > second_num )
    	printf("%d is greater", first_num);
	else
    	printf("%d is greater", second_num);
}
