#include<stdio.h>
void store(int a[], int size);
unsigned long long int arrayToNum(int a[], int size);
main()
{
	int array[10];
	store(array, 10);
	unsigned long long int num = arrayToNum(array, 10);
	printf("%llu", num);
}

void store(int a[], int size)
{
	for(int i = 0 ; i < size ; i++)
	scanf("%d", &a[i]);
}

unsigned long long int arrayToNum(int a[], int size)
{
	unsigned long long int num = 0;
	for(int i = 0 ; i < size ; i++)
		num = num*10 + a[i];
		return num;
}
