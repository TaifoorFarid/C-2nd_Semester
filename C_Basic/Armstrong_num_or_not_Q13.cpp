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
