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
