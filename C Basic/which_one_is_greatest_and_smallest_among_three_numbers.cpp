#include<stdio.h>
main()
{
	int first_num , second_num , third_num;
	printf("Enter three numbers:\n");
	scanf("%d %d %d", &first_num , &second_num , &third_num);
	
	if( first_num > second_num && first_num > third_num )
	{
    	printf("%d is greater", first_num);
    	
    	if( second_num < third_num )
        	printf("\n%d is smaller", second_num);
    	else
        	printf("\n%d is smaller", third_num);
    }
	else if( second_num > third_num)
	{
    	printf("%d is greater", second_num);
    	
    	if( first_num < third_num )
        	printf("\n%d is smaller", first_num);
    	else
        	printf("\n%d is smaller", third_num);
    }
    else
    {
        printf("%d is greater", third_num);
        
        if( first_num < second_num )
        	printf("\n%d is smaller", first_num);
    	else
        	printf("\n%d is smaller", second_num);
    }
}
