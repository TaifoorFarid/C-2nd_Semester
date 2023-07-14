#include<stdio.h>
main()
{
	int side_1, side_2, side_3, largest, sum;
	printf("Enter three sides:\n");
	scanf("%d %d %d",&side_1, &side_2, &side_3);
	
	largest = side_1;
	if(side_2 > largest)
	largest = side_2;
	if(side_3 > largest)
	largest = side_3;
	
	sum = (side_1 + side_2 + side_3) - largest;
	
	if(sum > largest)
       printf("The triangle is valid");
	else
       printf("The triangle is not valid");		
}
