#include<stdio.h>
main()
{
	int i, j, choice;
	printf("Enter any odd number greater than 1: ");
	scanf("%d", &choice);
	for(i = 1; i <= choice ; i++)
	{
		for(j = 1; j <= choice ; j++)
		{   
			if( j >=(choice-1)-i && j <= choice/2+i && i<=(choice+1)/2 )
		    	printf("*");
			else
			{
			if( j >= i-choice/2 && j <= (choice-1)*2-i && i>=(choice+1)/2 )
                printf("*");
		    else
		    	printf(" ");
		    }
		}
		printf("\n");
	}
}
