#include<stdio.h>
void store(int a[], int size);
void check_different(int a[], int b[], int size);
main()
{
	int size;
	printf("Enter the size of array: \n");
	scanf("%d", &size);
	int array1[size];
	printf("Fill the first array.\n");
	store(array1, size);
	int array2[size];
	printf("Fill the second array.\n");
	store(array2, size);
	printf("Differrnt element: ");
	check_different(array1, array2, size);
	check_different(array2, array1, size);
}

void store(int a[], int size)
{
	for(int i = 0 ; i < size ; ++i)
	scanf("%d", &a[i]);
}

void check_different(int a[], int b[], int size)
{
	
	for(int i = 0 ; i < size ; ++i){
		int count = 0;
	   for(int j = 0 ; j < size ; j++)
	      if(a[i] != b[j])
	      ++count;
	    if(count == size)
	    printf("%d ", a[i]);
	}
}
