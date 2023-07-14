#include<stdio.h>
main()
{
	int first_num , second_num;
	printf("Enter two numbers:\n");
	scanf("%d%d", &first_num , &second_num);
	
	if( first_num < second_num )
    	printf("%d is smaller", first_num);
	else
    	printf("%d is smaller", second_num);
}
