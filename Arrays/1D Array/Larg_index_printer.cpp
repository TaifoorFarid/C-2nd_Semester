#include<stdio.h>
void store(int a[], int size);
void larg_indexFind(int a[], int size);
main()
{
	int array[5];
	printf("Fill the array:\n");
	store(array, 5);
	larg_indexFind(array, 5);
}

void store(int a[], int size)
{
	for(int i = 0 ; i < size ; i++)
	scanf("%d", &a[i]);
}

void larg_indexFind(int a[], int size)
{
	int larg = a[0];
	int index;
	for(int i = 0 ; i < size ; i++)
	   if(a[i] > larg){
	   	larg =a[i];
	   	index = i;
	   }
	printf("%d(largest) is on index %d", larg, index);
}
