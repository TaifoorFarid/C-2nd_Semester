#include<stdio.h>
main()
{
	int choice;
	float area, length, width, hieght, radius, pi = 3.14159;
	
	printf("Select the area to calculate area");
	printf("\n1. Area of circle.");
	printf("\n2. Area of triangle.");
	printf("\n3. Area of rectangle.\n");
	
	scanf("%d", &choice);
	
	if(choice == 1)
	{
		printf("\nEnter radius:");
		scanf("%f", &radius);
		
		area = pi * radius * radius;//formula
		
		printf("\nArea of circle is %f", area);
	}
	else if(choice == 2)
	{
		printf("\nEnter length and hieght of triangle:");
		scanf("%f %f", &length, &hieght);
		
		area = 0.5 * (length * hieght);//formula
		
		printf("\nArea of triangle is %f", area);
	}
	else if(choice == 3)
	{
		printf("\nEnter length and width of rectangle:");
		scanf("%f %f", &length, &hieght);
		
		area = length * width;//formula
		
		printf("\nArea of rectangle is %f", area);
	}
	else
	printf("Wrong choice!");
}
