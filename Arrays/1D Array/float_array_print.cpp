#include<stdio.h>
void float_array(float a[], int size);
main()
{
	float a[5];
	printf("Fill the Array: \n");
	float_array(a, 5);
}

void float_array(float a[], int size)
{
	for(int i = 0 ; i < size ; i++)
		scanf("%f", &a[i]);
	for(int j = 0 ; j < size ; j++)
	    printf("%.3f ", a[j]);
}
