#include<stdio.h>
int pascal_number(int n, int k);
main()
{
	int lines;
	
	printf("Emter number of lines:");
	scanf("%d", &lines);
	
	for(int r = 0 ; r <= lines ; r++)
	{
		int k = 1;
		int col = 0;
		for(int c = 0 ; c <= lines*2 ; c++)
		{
			if(c >= lines - r && c <= lines + r && k) {
				printf(" %d", pascal_number(r, col++));
				k = 0;
			}
			else {
				printf("  ");
				k = 1;
			}
		}//end of inner for
		printf("\n");
	}//end of outer for
}


int pascal_number(int n, int k)
{
    int sub = n-k;
	int n_fact = 1;
	int k_fact = 1;
	int n_k_fact = 1;
	
	for(int i = n ; i > 1 ; i--)
		n_fact = n_fact * i;
	for(int j = k ; j > 1 ; j--)
	    k_fact = k_fact * j;
	for(int l = sub ; l > 1 ; l--)
	    n_k_fact = n_k_fact * l;
	    
	return n_fact/(k_fact * n_k_fact);
}
