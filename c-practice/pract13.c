#include <stdio.h>

int main()
{
	printf("Do you want to order? Y or N: ");
	char proceed;
	scanf("%c", &proceed);
	
	while (proceed != 'Y' || proceed != 'N')
	{
		printf("Only Y and N! Type again: ");
		scanf("%c", &proceed);
	}
	
	if (proceed == 'Y')
	{
		printf("\nHere are the menu:\nA Burger = $5\nB Hotdog = $4\nC Coke   = $2\nD Water  = $1\nE Done ordering...\n\n");
			
	}
	
	if (proceed == 'N')
	{
		printf("Thank you! See you next time!...\n");
	}
	
	return 0;
}
