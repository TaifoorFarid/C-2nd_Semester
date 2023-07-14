#include<stdio.h>
int main()
{
	int length;
	printf("Enter any number: ");
	scanf("%d", &length);
	
	for(int i=0 ; i<=length ; i++ )
	{
		for(int j=0 ; j<=(length*2) ; j++ )
		{
			printf(" %d", i);
		}
		printf("\n");
	}
}
