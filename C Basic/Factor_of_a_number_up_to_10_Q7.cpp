#include<stdio.h>
int main()
{
    int count = 1, number, factor;
    
    printf("Enter a number:\n");
    scanf("%d", &number);
    printf("Following are the 10 factors of number %d:\n", number); 

    while(count <= 10)
    {
    factor = number * count;
    printf("%d  ", factor);
    count++;
    }
}
