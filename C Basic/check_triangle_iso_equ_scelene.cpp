#include<stdio.h>
main()
{
	float side1, side2, side3;
	printf("Enter length of sides of triangle:\n");
	scanf("%f %f %f", &side1, &side2, &side3);
	
	if(side1 == side2 && side2 == side3)
    	printf("The triangle is equilateral.");
    else if(side1 == side2 || side1 == side3 || side2 == side3)
        printf("The triangle is isosceles.");
	else
    	printf("The triangle is scalene.");
}
