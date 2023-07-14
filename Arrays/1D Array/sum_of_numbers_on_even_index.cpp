#include<stdio.h>
void store(int a[], int size);
int SumOdd(int a[], int size);
main()
{
	int size;
	printf("Enter the size of array: ");
	scanf("%d", &size);
	int array[size];
	printf("Fill the array\n");
	store(array, size);
	int sum = SumOdd(array, size);
	printf("Sum of numbers on even index is %d", sum);
}

void store(int a[], int size)
{
	for(int i = 0 ; i < size ; i++)
	scanf("%d", &a[i]);
}

int SumOdd(int a[], int size)
{
	int sum =  0;
	for(int i = 0 ; i < size ; i++)
	{
		if(i % 2 == 0)
			sum = sum + a[i];
		else
        	continue;
	}
	return sum;
}
