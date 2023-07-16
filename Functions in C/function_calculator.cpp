#include<stdio.h>
#include<conio.h>
int again_or_not();
int multiplication(int num1, int num2);
float division(float num1, float num2);
int addition(int num1, int num2);
int subtraction(int num1, int num2);
main()
{
	while(1)
	{
		int num1, num2;
	
      	printf("Enter two numbers:\n");
     	scanf("%d%d", &num1, &num2);
	
    	int choice;
	
    	printf("Enter your choicce.\n");
    	printf("1. Multiplication.\n");
    	printf("2. Divide.\n");
    	printf("3. Addition.\n");
    	printf("4. Subtraction.\n  ");
    	scanf("%d", &choice);
	
    	if(choice == 1)
    	{
    		int multi = multiplication(num1, num2);
     		printf("%d * %d = %d", num1, num2, multi);
    	}
    	else if(choice == 2)
    	{
     		float div = division(num1, num2);
    		printf("%d / %d = %f", num1, num2, div);
        }
        else if(choice == 3){
      		int add = addition(num1, num2);
    		printf("%d + %d = %d", num1, num2, add);
        }
        else if(choice == 4){
    		int sub = subtraction(num1, num2);
    		printf("%d - %d = %d", num1, num2, sub);
        }
        else
            printf("Wrong choice!");
            
        int repeat;
        while(1)
    	{
        	int again = again_or_not();
        	if(again == 1 || again == 2)
			{
            	repeat = again;
            	break;
            }
            printf("Wrong Choice!");
     	}//end of inner while
    	if(repeat == 2)
    	break;
    }//end of while
}//end of main

int multiplication(int num1, int num2)
{
	int res = num1 * num2;
	return res;
}

float division(float num1, float num2)
{
	float res = num1 / num2;
	return res;
}

int addition(int num1, int num2)
{
	int res = num1 + num2;
	return res;
}

int subtraction(int num1, int num2)
{
	int res = num1 - num2;
	return res;
}

int again_or_not()
{
	int again;
	printf("\n\n1.Again.\n2.End\n  ");
    scanf("%d",&again);
    return again;
}
