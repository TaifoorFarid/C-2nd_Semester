#include <stdio.h>
main()
{
	int num1, num2;
	
	printf("Number 1 = ");
	scanf("%d", &num1);
	printf("Number 2 = ");
	scanf("%d", &num2);
	int count = 2;
	int ans = 1;
	
	while(num1 != 1 || num2 != 1){
		
		if(num1 % count == 0 && num2 % count == 0){
			num1 /= count;
			num2 /= count;
			ans *= count;
		}
		else if(num1 % count == 0){
			num1 /= count;
			ans *= count;
		}
		else if(num2 % count == 0){
			num2 /= count;
			ans *= count;
		}
		else
		count++;
	}
	printf("LCM is %d", ans);
}
