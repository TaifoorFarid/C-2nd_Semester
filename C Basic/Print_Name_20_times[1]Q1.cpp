1. Write a program to print your name 20 times on screen.

#include<stdio.h>
int main()
{
    int count=1;
    
    while(count < 21)
    {
    printf("%d. Taaifoor Farid Siddiqui\n", count);
    count++;
    }
}

2. Write a program to print numbers from 1 to 10.

#include<stdio.h>
int main()
{
    int count=1;
    
    while(count < 11)
    {
    printf("%d\n", count);
    count++;
    }
}

3. Write a program to print odd numbers from 1 to 20

#include<stdio.h>
int main()
{
    int count=1;
    
    while(count < 21)
    {
    printf("%d\n", count);
    count = count +2;
    }
}

4. Write a program to print even numbers from 50 to 70

#include<stdio.h>
int main()
{
    int count=50;
    
    while(count < 71)
    {
    printf("%d\n", count);
    count = count +2;
    }
}

5. Ask user to enter 10 numbers. Print the sum and average of the entered numbers.

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

6. Enter a number and display its divisors.  (e.g., divisors of 15 are: 1,3,5,15)

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

7. Enter a number and show its factors upto a specific number. (factors of 3 are : 3,6,9,12 …. )

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

8. Write a program to calculate and print the sum of all multiples of 7 from 1 to 100.

#include<stdio.h>
int main()
{
    int count = 7, number, sum = 0;
    
    while(count < 101)
    {
    sum = sum + count;
    count = count + 7;
    }
    printf("sum is %d", sum);
}

9. Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another.

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

10. Write a program to enter a value and calculate its factorial. (e.g., 5! = 5*4*3*2*1)

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

11. Enter a number and tell whether it is prime or not. 

#include<stdio.h>
main()
{
	int prime, count = 0, check;
	printf("Enter a number to check weather the number is prime or not:\n");
	scanf("%d", &prime);
	
	while(check <= prime)
	{
		if( prime % check == 0)
		count = count + 1;
		check++;
	}
	if(count == 2)
	printf("%d is prime", prime);
	else
	printf("%d is not prime", prime);
}

12. Write a program to print Fibonacci series (1 1 2 3 5 7 12 19 31 ……)

//1 1 2 3 5 7 12 19 31 
#include<stdio.h>
main()
{
	int last_num = 1, secondlast_num = 0, count = 1, length, febonachi = 0;
	printf("How long you want to print febonachi series:\n");
	scanf("%d", &length);
	printf("1, ");
	
	while(count <= length)
	{
		febonachi = last_num + secondlast_num;
		printf("%d, ", febonachi);
		secondlast_num = last_num;
		last_num = febonachi;
		count++;
	}
	
}

13. Enter a 3 digit number and find whether its Armstrong number or not? If sum of cubes of digits of three-digit number is equal to the number itself, then the number is called an Armstrong number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 
* 5 ) + ( 3 * 3 * 3 ).


#include<stdio.h>
main()
{
	int num, digit, count, Armstrong_num=0, ans, freez;
	printf("Enter a 3 digit number: \n");
	scanf("%d", &num);
	freez = num;
	  while (count < 4)
	  {
	        digit = num % 10;
	        num = num / 10;
	        ans = digit * digit * digit;
	        Armstrong_num = Armstrong_num + ans;
	        count++;
      }
    	if(Armstrong_num == freez)
    	printf("%d is a armstrong number", freez);
    	else
    	printf("%d is not a armstrong number", freez);
}

14. Write a program to print out all Armstrong numbers between 100 and 500. 


#include<stdio.h>
main()
{
	int num, digit, count, Armstrong_num, ans, counter = 100;
	while (counter <501)
	{
	    Armstrong_num = 0;
		num = counter;
		count = 1;
	  while (count < 4)
	  {
	        digit = num % 10;
	        num = num / 10;
	        ans = digit * digit * digit;
	        Armstrong_num = Armstrong_num + ans;
	        count++;
      }
    	if(Armstrong_num == counter)
    	printf("%d, ", counter);
    	counter++;
    }
}

15. Write a program in C to read a number and display in the word.

#include<stdio.h>
main()
{
	int num;
	printf("Enter a number:\n");
	scanf("%d", &num);
	
	switch(num)
	{
	case 1:
		printf("one");
		break;
		
	case 2:
		printf("two");
		break;
		
	case 3:
		printf("three");
		break;
		
	case 4:
		printf("four");
		break;
		
	case 5:
		printf("five");
		break;
		
	case 6:
		printf("six");
		break;
		
	case 7:
		printf("seven");
		break;
		
	case 8:
		printf("eight");
		break;
		
	case 9:
		printf("nine");
		break;
		
	default:
		printf("enter only a single digit number");
    }
}

16. Write a program to enter an expression and display its result when = is entered. (e.g., 2 + 3 + 8 – 3 * 5 -2 + 7 = )



