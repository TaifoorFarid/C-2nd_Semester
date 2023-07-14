#include<stdio.h>
int main()
{
    int count = 1, number, sum = 0, average;
    
    while(count < 11)
    {
	printf("Enter %d number: ", count);
    scanf("%d", &number);
    sum = sum + number;
    count++;
    }
    average = sum/10;
    printf("Sum is these numbers is %d\nAverage is %d", sum, average);
}
