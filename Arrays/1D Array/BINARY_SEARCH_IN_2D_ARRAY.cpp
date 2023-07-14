#include<stdio.h>
main()
{
	int a[5][5] = {
          {1,  2,  3,  4,  5 },
		  {6,  7,  8,  9,  10},
		  {11, 12, 13, 14, 15},
		  {16, 17, 18, 19, 20},
		  {21, 22, 23, 24, 25} 
};
    int r_low = 0;
    int c_low = 0;
    int r_upp = 4;
    int c_upp = 4;
    int l_lim[0][0];
    int u_lim[4][4];
    int target = 10;
    
    while(1)
    {
    	int set = (r_low + r_upp)/2;
    	int mid = a[set][c_upp];
    	
    	if(mid == target)
    	{
    		printf("Target found index: %d-%d", set, c_upp);
    		return 0;
		}
    	else if(mid > target)
    	continue;
    	else{
    		if(set == 0)
    		set += 1;
    		r_low = set + 1;
		}
    	if(r_low == set)
    	break;
	}
	while(c_low <= c_upp)
	{
		int set = (c_low + c_upp)/2;
		int mid = a[r_low][set];
		
		if(mid == target)
		printf("Target found index: %d-%d", r_low, set);
		else if(mid > target)
		c_upp--;
		else
		c_low = set + 1;
	}
	printf("Target not found");
}
