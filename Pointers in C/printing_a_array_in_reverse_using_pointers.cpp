#include<stdio.h>
main()
{
	int a[5];
	for(int i = 0 ; i < 5 ; i++)
	scanf("%d", &a[i]);
	int *p = &a[4];;
	for(int i = 0 ; i < 5 ; i++)
	printf("%d ", *(p - i));
}
