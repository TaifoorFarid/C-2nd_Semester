#include<stdio.h>
#define SIZE 10
void answer_add(int a[][SIZE], int b[][SIZE], int r[][SIZE], int row, int col);
void answer_sub(int a[][SIZE], int b[][SIZE], int r[][SIZE], int row, int col);
void store(int a[][SIZE], int row, int col);
main()
{
	int row, col;
	int choice;
	printf("What you want:");
	printf("\n1. Add matrices.");
	printf("\n2. subtract matrices.\n");
	scanf("%d", &choice);
	printf("Enter the rows of both matrices: ");
	scanf("%d", &row);
	printf("Enter the columns of both matrices: ");
	scanf("%d", &col);
	
	int matrix1[SIZE][SIZE];
	printf("\nFill %d elements of 1st array\n", row*col);
	store(matrix1, row, col);
	printf("Fill %d elements of 2st array\n", row*col);
	int matrix2[SIZE][SIZE];
	store(matrix2, row, col);
	int result[SIZE][SIZE];
	
	if(choice == 1)
	answer_add(matrix1, matrix2, result, row, col);
	else if(choice == 2)
	answer_sub(matrix1, matrix2, result, row, col);
}

void answer_add(int a[][SIZE], int b[][SIZE], int r[][SIZE], int row, int col)
{
	printf("Result: \n");
	for(int i = 0 ; i < row ; i++)
    	{
    		for(int j = 0 ; j < col ; j++)
        	{
        		r[i][j] = a[i][j] + b[i][j];
        		printf("%d  ", r[i][j]);
	     	}
	     	printf("\n");
		}  	
}

void answer_sub(int a[][SIZE], int b[][SIZE], int r[][SIZE], int row, int col)
{
	printf("Result: \n");
    for(int i = 0 ; i < row ; i++)
    	{
    		for(int j = 0 ; j < col ; j++)
        	{
        		r[i][j] = a[i][j] - b[i][j];
        		printf("%d  ", r[i][j]);
	     	}
	     	printf("\n");
		}	
}

void store(int a[][SIZE], int row, int col)
{
	for(int i = 0 ; i < row ; i++)
    	for(int j = 0 ; j < col ; j++)
        	scanf("%d", &a[i][j]);
}
