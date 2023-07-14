#include<stdio.h>
void store(int a[], int size);
void bubble_sort(int a[], int size);
main()
{
	int size;
	printf("Enter array size: ");
	scanf("%d", &size);
	int array[size];
	printf("Fill the array: \n");
	store(array, size);
	bubble_sort(array, size);
	for(int i = 0 ; i < size ; ++i)
	   printf("%d ", array[i]);
}

void store(int a[], int size)
{
	for(int i = 0 ; i < size ; ++i)
	   scanf("%d", &a[i]);
}

void bubble_sort(int a[], int size)
{
	for(int i = 1 ; i < size ; ++i)
	{
		int flag = 1;  //to avoid unwanted iterations.
	   for(int j = 0 ; j < size - i ; ++j)
	   	if(a[j] > a[j + 1])
	      	{
	      		flag = 0;
	      		int t = a[j];
	      		a[j] = a[j + 1];
	      		a[j + 1] = t;
	        }
	        if(flag)
	        {
	        	printf("round = %d", i);
	        	return;
			}
    }
}
