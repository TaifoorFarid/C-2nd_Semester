#include<stdio.h>
main()
{
	float num, average;
	int count=1,sum = 0, largest, smallest;

	while(count<11)
	{
		printf("Enter %d number: ", count);
		scanf("%f", &num);
		sum = sum +num;
		if(count == 1)
		{
			smallest = num;
			largest = num;
		}
		if(smallest > num)
		smallest = num;
		if(largest < num)
		largest = num;
		num = 0;
		count++;
	}
	average = sum/10;
	
	printf("\n1. smallest number is %d\n", smallest);
	printf("2. largest number is %d\n", largest);
	printf("3. sum of numbers is %d\n", sum);
	printf("4. average of these numbers is %f\n", average);
}
