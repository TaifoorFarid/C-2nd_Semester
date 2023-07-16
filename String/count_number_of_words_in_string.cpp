#include<stdio.h>
main()
{
	char str[50];
	fgets(str, 50, stdin);
	int words = 1;
	for(int i = 0 ; str[i] ; i++)
	{
		if(str[i] == ' ') 
		++words;
	}
	printf("words: %d", words);
} 
