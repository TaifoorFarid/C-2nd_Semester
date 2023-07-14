#include<stdio.h>
int find_index(int a[], int size, int n);
main()
{
	int array[10] = {0, 5, 1, 9, 4, 6, 8, 3, 7, 2};
	int num;
	printf("Input: ");
	scanf("%d", &num);
	int index = find_index(array, 10, num);
	printf("Answer: %d", index);
}

int find_index(int a[], int size, int n)
{
	for(int i = 0 ; i < size ; i++)
		if(a[i] == n)
		return i;
	return -1;
}
