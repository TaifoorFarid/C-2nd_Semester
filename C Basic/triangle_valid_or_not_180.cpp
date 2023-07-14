#include<stdio.h>
main()
{
	float angle1, angle2, angle3;
	printf("Enter three sides of triangle:\n");
	scanf("%f %f %f",&angle1, &angle2, &angle3);
	
	if(angle1 + angle2 + angle3 == 180)
    	printf("A triangle can be formed by using these angles");
	else 
    	printf("A triangle cannot be formed by using these angles");
}
