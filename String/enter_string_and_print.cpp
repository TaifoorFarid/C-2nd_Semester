#include<stdio.h>
main()
{
	char str[23];
	fgets(str, 23, stdin);
	int i;
	for(i = 0 ; str[i] ; i++);
	int length = i;
	printf("%d", length);
}
