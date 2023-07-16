#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void print(int a[][5], int size)
{
	for(int i = 0 ; i < size ; i++)
	{
		for(int j = 0 ; j < size ; j++)
    	printf("%d ", a[i][j]);
    	printf("\n");
	}
}

void sort(int a[][5], int size)
{
	int count = 0;
	for(int i = 1 ; i < size*size ; i++)
	{
    	int *start = a[0];
    	int flag = 1;
		for(int j = 0 ; j < size*size - i ; j++)
    	{
	    	if(*start > *(start+1))
	        	{
	    		flag = 0;
		    	int temp = *start;
		    	*start = *(start + 1);
		    	*(start + 1) = temp;
	        	}
	    start++;
	    count++;
       	} 
       	if(flag)
       	{
		    printf("\nItreations saved = %d\n", 300 - count);
	        return;
	         
	    }
	}
}

main()
{
	srand(time(NULL));
	int a[5][5];
	for(int i = 0 ; i < 5 ; i++)
	for(int j = 0 ; j < 5 ; j++)
    	a[i][j] = 1 + (rand() % 100);
	print(a, 5);
	sort(a, 5);
	printf("\n");
	print(a, 5);
}
