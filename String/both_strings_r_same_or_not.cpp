#include<stdio.h>
int check_strings(char s1[], char s2[]);
main()
{
	char s1[20];
	printf("Enter the 1st string: ");
	fgets(s1, 20, stdin);
	char s2[20];
	printf("Enter the 2nd string: ");
	fgets(s2, 20, stdin);
	if(check_strings(s1, s2))
	printf("Strings are equal.");
	else
	printf("Strings are not equal.");
}


int check_strings(char s1[], char s2[])
{
	int  ans = 1;
	for(int i = 0 ; s1[i] ; i++)
		if(s1[i] != s2[i])
		ans = 0;
	return ans;
}
