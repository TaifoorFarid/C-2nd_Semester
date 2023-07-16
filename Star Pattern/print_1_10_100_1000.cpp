#include<stdio.h>
main()
{
	int row, col;
	int length, print;
	
	printf("Enter number of lines: ");
	scanf("%d", &length);
	
	for(row = 1; row <= length; row++)
	{
		print = row;
		for(col = 1; col <= 4; col++)
		{
			if(col == 1)
			printf("%d", row);
			else{
				  print = print*10;
				  printf(" %d", print);
			    }
		}
		printf("\n");
			print = 0;
	}
}
