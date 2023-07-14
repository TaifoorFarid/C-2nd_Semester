#include<stdio.h>
int sumOfElementsOfArray(int a[], int size);
void store(int a[], int size);
main()
{
	int size;
	printf("Enter size of array: ");
	scanf("%d", &size);
	int array[size];
	printf("Fill the array:\n");
	store(array, size);
	int sum = sumOfElementsOfArray(array, size);
	printf("Sum of all numbers of this array is %d", sum);
}

void store(int a[], int size)
{
	for(int i = 0 ; i < size ; i++)
	scanf("%d", &a[i]);
}

int sumOfElementsOfArray(int a[], int size)
{
	int sum = 0;
	for(int i = 0 ; i < size ; i++)
	sum = sum + a[i];
	return sum;
}
