#include<stdio.h>
main()
{
	int row, col, choice;
	printf("Enter any odd number greater than 1: ");
	scanf("%d", &choice);
	for(row = 1;row <= choice;row++)
	{
		for(col = 1;col <= choice;col++)
		{
			if( (row == col) || (row+col == (choice+1)) )
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
