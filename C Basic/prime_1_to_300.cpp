#include<stdio.h>
main()
{
	int  count, check, counter = 1;

while(counter < 301)
    {
    	count = 0;
    	check = 2;
	   while(check < counter)
	    {
		if( counter % check == 0)
		count = count + 1;
		check++;
     	}
    	if(count == 0)
    	printf("%d ", counter);
    	counter++;
	}
}
