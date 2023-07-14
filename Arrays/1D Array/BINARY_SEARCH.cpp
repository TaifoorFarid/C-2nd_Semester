#include<stdio.h>
void store(int a[], int size)
{
	for(int i = 0 ; i < size ; i++)
    	scanf("%d", &a[i]);
}

void sort(int a[], int size)
{
	for(int i = 1 ; i < size ; i++)
	{
    	int flag = 1;
    	for(int j = 0 ; j < size-i ; j++)
     	    	if(a[j] > a[j+1])
    	    	{
    	    		flag = 0;
    		    	int t = a[j];
    		    	a[j] = a[j+1];
    		    	a[j+1] = t;
    	    	}
    		if(flag)
    		return;
	}
}

int binary_search(int a[], int size, int num)
{
	int l_lim = 0;
	int u_lim = size - 1;
	while(l_lim <= u_lim)
	{
		int med = (u_lim + l_lim)/2;
		if(a[med] == num)
    		return med; 
		else if(a[med] > num)
			u_lim = med - 1;
		else
    		l_lim = med + 1;   
	}
	return -1;
}

main()
{
	int size;
	printf("Enter length of array: ");
	scanf("%d", &size);
	int array[size];
	printf("\nFill array of %d numbers:\nIf you enter a number multiple times,", size);
	printf("\nthe program will show the index of the number which is found first.\n");
	printf("So, its better to avoid the repetation of a number!\n");
	store(array, size);
	sort(array, size);
	for(int i = 0 ; i < size ; i++)
    	printf("%d ", array[i]);
	int num;
	printf("\nEnter the number that you want to find in the array: ");
	scanf("%d", &num);
	if(binary_search(array, size, num) != -1)
	printf("Your number is on index: %d", binary_search(array, size, num));
	else
	printf("Your searched number is not present in the array");
}
