#include<stdio.h>
main()
{
	int row, col, choice;
	printf("Enter any number: ");
	scanf("%d", &choice);
	for(row = 1 ; row <= choice ; row++)
	{
		for(col = 1 ; col <= (choice*2)+1 ; col++)
		{
			if( (row % 2 == 0) && (col % 2 == 0) )
			printf("0");
			else
			printf("*");
		}
		printf("\n");
	}
}
