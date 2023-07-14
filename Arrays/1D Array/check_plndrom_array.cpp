#include<stdio.h>
void store(int a[], int size);
int check_plndrom(int a[], int size);
main()
{
    int array[10];
	printf("Fill the array:\n");
	store(array, 10);
	if( check_plndrom(array, 10) )
	printf("The array is palindrome");
	else
	printf("The array is not palindrome");
}

void store(int a[], int size)
{
	for(int i = 0 ; i < 10 ; i++)
		scanf("%d", &a[i]);
}

int check_plndrom(int a[], int size)
{
	int start = 0;
	int end = 9;
	while(start < end){
		if(a[start] != a[end])
		return 0;
	++start;
	--end;
	}
	return 1;
}
