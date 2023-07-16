#include<stdio.h>
main()
{
	int row, col, choice;
	char character = 'A';
	printf("Enter any number: ");
	scanf("%d", &choice);
	for(row = 1 ; row <= choice ; row++)
	{
		for(col = 1 ; col <= (choice*2)-1 ; col++)
		{
			if(row >= 2)
			{
			  if( col >= choice-row+2 &&  col <= choice+row -2 )
			   printf("  ");
			  else
			  {
			    printf(" %c", character);
				if(col >= choice)
			    character--;
			    else
			    character++;
			  }
		   }
		   else
		   {
		   printf(" %c", character);
		        if(col >= choice)
			    character--;
			    else
			    character++;
	       }
		}
		printf("\n");
		character = 'A';
	}
}
