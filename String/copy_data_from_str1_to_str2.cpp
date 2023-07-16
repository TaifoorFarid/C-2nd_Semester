#include<stdio.h>
void copy_s1_to_s2(char a[], char b[])
{
	int i;
	for(i = 0 ; a[i] ; i++)
		b[i] = a[i];
		b[i] = '\0';
	printf("string 2: %s", b);
}

main()
{
	char s1[50];
	printf("Enter 1st string: ");
	fgets(s1, 50, stdin);
	char s2[50];
	copy_s1_to_s2(s1, s2);
}
