#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5];
	for(int i=0; i<5; i++)
	{
		printf("Enter the Value :");
		scanf("%d",a[i]);
		
	}
		for(int i=0; i<5; i++)
	printf("%d",&a[i]);
	
	getch();
}
