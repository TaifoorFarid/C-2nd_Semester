#include<stdio.h>
void find_max(int a[], int size);
void store(int a[], int size);
main()
{
	int array[5];
	printf("Fill the array to find maximum:\n");
	store(array, 5);
	find_max(array, 5);
}

void find_max(int a[], int size)
{
	int maximum = a[0];
	for(int i = 1 ; i < size ; i++)
	  if(a[i] > maximum)
	  maximum = a[i];
	printf("Maximin = %d", maximum);
}

void store(int a[], int size)
{
	for(int i = 0 ; i < size ; i++)
	  scanf("%d", &a[i]);
}
