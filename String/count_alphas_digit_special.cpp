#include<stdio.h>
void check_alp_dig_spe(char a[])
{
	int alphas = 0;
	int dig = 0;
	int special = 0;
	for(int i = 0 ; a[i] ; i++)
	{
		if(a[i] >= 97 && a[i] <= 122 || a[i] >= 65 && a[i] <= 90)
    		alphas++;
   		else if(a[i] >= '0' && a[i] < '9')
    		dig++;
		else
			special++;
	}
	printf("\nNumber of Alphabets in the string is : %d", alphas);
	printf("\nNumber of Digits in the string is : %d", dig);
	printf("\nNumber of special characters in the string is : %d", special);
}

main()
{
	char str[50];
	fgets(str, 50, stdin);
	check_alp_dig_spe(str);
}
