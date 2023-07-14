#include<stdio.h>
void array_print(int a[], int size);
main()
{
	int a[5];
	printf("Fill the Array: \n");
	array_print(a, 5);
}

void array_print(int a[], int size)
{
	for(int i = 0 ; i < size ; i++)
		scanf("%d", &a[i]);
	for(int j = 0 ; j < size ; j++)
	    printf("%d ", a[j]);
}
