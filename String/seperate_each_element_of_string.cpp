#include<stdio.h>
main()
{
	char str[20];
	fgets(str, 20, stdin);
	for(int i = 0 ; str[i] ; i++)
	printf("%c  ", str[i]);
}
