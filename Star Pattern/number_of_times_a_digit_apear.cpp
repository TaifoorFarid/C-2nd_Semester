#include<stdio.h>
main()
{
	int zero=0, one=0, two=0, three=0, four=0, five=0, six=0, seven=0, eight=0, nine=0, ten=0;
	int i, dig, num;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	for( i = 1; num > 0 ; i++)
	{
		dig = num % 10;
		num = num / 10;
		
		if(dig == 0)
		zero = zero + 1;
		else if(dig == 1)
		one = one + 1;
		else if(dig == 2)
		two = two + 1;
		else if(dig == 3)
		three = three + 1;
		else if(dig == 4)
		four = four + 1;
		else if(dig == 5)
		five = five + 1;
		else if(dig == 6)
		six = six + 1;
		else if(dig == 7)
		seven = seven + 1;
		else if(dig == 8)
		eight = eight + 1;
		else
		nine = nine + 1;
	}//end of for
	
	if(zero > 0)
	printf("\n0 = %d times", zero);
	if(one > 0)
	printf("\n1 = %d times", one);
	if(two > 0)
	printf("\n2 = %d times", two);
	if(three > 0)
	printf("\n3 = %d times", three);
	if(four > 0)
	printf("\n4 = %d times", four);
	if(five > 0)
	printf("\n5 = %d times", five);
	if(six > 0)
	printf("\n6 = %d times", six);
	if(seven > 0)
	printf("\n7 = %d times", seven);
	if(eight > 0)
	printf("\n8 = %d times", eight);
	if(nine > 0)
	printf("\n9 = %d times", nine);
}
