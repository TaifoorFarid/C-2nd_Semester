#include<stdio.h>
main()
{
	char character;
	printf("Enter anything:\n");
	scanf("%c", &character);
	
	if((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z') )
    printf("You entered an alphabet");
    else if(character >= '0' && character <= '9')
    printf("You entered a number");
    else
    printf("You entered a special character");
}
