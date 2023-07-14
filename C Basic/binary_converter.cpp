#include<stdio.h>
#include<conio.h>
main()
{
	unsigned long long int res = 0, ans, unit_place = 1, num, count;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	while(1)
	{
		ans = num % 2;
		num = num / 2;
		if( count == 1 )
		{
			res = res +(ans * unit_place);
			count++;
		}
		else
		{
			unit_place = unit_place * 10;
			res = res +(ans * unit_place);
		}
		if(num == 0)
		break;
	}
	printf("%llu", res/10);
}
