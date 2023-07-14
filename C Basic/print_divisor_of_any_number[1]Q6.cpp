#include<stdio.h>
int main()
{
    int count = 1, number;
    
    printf("Enter a number:\n");
    scanf("%d", &number);
    printf("Following are the divisers of this number\n"); 

    while(count <= number)
    {
    if(number % count == 0)
    printf("%d, ", count);
    count++;
    }
}
