#include<stdio.h>
main()
{
	int terms, freez; 
	double sum = 0, count = 1;

	printf("How many terms you want to calculate sum: ");
	scanf("%d", &terms);
	
	while(count <= terms)
	{
		sum = sum + 1/count;
		freez = count;
		printf("1/%d + ", freez);
		count++;
		freez = 0;
	}
	printf("\nThe sum of %d terms of harmonic series is %lf", terms, sum);
}
