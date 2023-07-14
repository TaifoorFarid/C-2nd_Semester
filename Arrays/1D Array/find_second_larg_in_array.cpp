#include<stdio.h>
void store(int a[], int size);
int second_larg(int a[], int size);
main()
{
	int array[5];
	printf("Fill the array to find the second largest:\n");
	store(array, 5);
	int res = second_larg(array, 5);
	printf("second largest: %d", res);
}

void store(int a[], int size)
{
	for(int i = 0 ; i < size ; i++)
	   scanf("%d", &a[i]);
}

int second_larg(int a[], int size)
{
	int larg;
	int sec_larg;
	for(int i = 0 ; i < size ; i++)
	   if(a[i] > larg){
	   	sec_larg = larg;
	   	larg = a[i];
	   }
	   else if(a[i] > sec_larg)
	   sec_larg = a[i];
	   else
	   continue;
	   return sec_larg;
}

