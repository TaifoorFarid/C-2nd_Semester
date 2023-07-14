#include<stdio.h>
int main()
{
    int count = 1, num1, num2, ans = 1;
    printf("Enter te number which you want to b the base:\n");
    scanf("%d", &num1);
    printf("Enter te number which you want to b the power:\n");
    scanf("%d", &num2);
    
    while(count <= num2)
    {
    ans = ans * num1;
    count++;
    }
      printf("Answer is %d", ans);
}
