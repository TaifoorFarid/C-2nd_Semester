#include<stdio.h>
#include<conio.h>
#define MAX_SIZE 10
void store(int a[][MAX_SIZE], int row, int col);
void result(int a[][MAX_SIZE], int b[][MAX_SIZE], int r[][MAX_SIZE], int row1, int col1, int row2, int col2);
void print(int r[][MAX_SIZE], int r1, int c2);
main()
{
	int row1, col1;
	printf("Enter rows of 1st matrix: ");
	scanf("%d", &row1);
	printf("Enter columns of 1st matrix: ");
	scanf("%d", &col1);
	int row2, col2;
	printf("\nEnter rows of 2nd matrix: ");
	scanf("%d", &row2);
	printf("Enter columns of 2nd matrix: ");
	scanf("%d", &col2);
	if(col1 != row2){
		printf("\n\tWith this order multiplication is not possible!\n");
		getch();
		return 0;
	}
	int matrix1[MAX_SIZE][MAX_SIZE];
	printf("\nFill the %d numbers of 1st matrix:\n", row1*col1);
	store(matrix1, row1, col1);
	
	int matrix2[MAX_SIZE][MAX_SIZE];
	printf("Fill the %d numbers of 2st matrix:\n", row2*col2);
	store(matrix2, row2, col2);
	
	int multiply[MAX_SIZE][MAX_SIZE];
	result(matrix1, matrix2, multiply, row1, col1, row2, col2);
	printf("Result order: %d x %d \n", row1, col2);
	print(multiply, row1, col2);
	getch();
}

void print(int r[][MAX_SIZE], int r1, int c2)
{
	for(int i = 0 ; i < r1 ; i++)
    	{
    		for(int j = 0 ; j < c2 ; j++)
        	printf("%d ", r[i][j]);
        	printf("\n");
		}
}

void result(int a[][MAX_SIZE], int b[][MAX_SIZE], int r[][MAX_SIZE], int row1, int col1, int row2, int col2)
{
	for(int i = 0 ; i < row1 ; i++)
    	for(int j = 0 ; j < col2 ; j++)
    	{
    		r[i][j] = 0;
    		for(int k = 0 ; k < col1 ; k++)
    		r[i][j] += a[i][k] * b[k][j];
		}
}

void store(int a[][MAX_SIZE], int row, int col)
{
	for(int i = 0 ; i < row ; i++)
    	for(int j = 0 ; j < col ; j++)
        	scanf("%d", &a[i][j]);
}

