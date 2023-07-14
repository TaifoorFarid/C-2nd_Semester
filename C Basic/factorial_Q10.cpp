#include<stdio.h>
int main()
{
    int num, factorial = 1;
    printf("Enter a number:\n");
    scanf("%d", &num);
    int count = num;
    
    while(count >= 1)
    {
    factorial = factorial * count;
    count--;
    }
      printf("Factorial is %d", factorial);
}
