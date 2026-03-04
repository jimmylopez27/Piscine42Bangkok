#include <stdio.h>

#define BUFF 20

int main()
{
	int count = 0;
	char word[BUFF];
	printf("Type your word here: ");
	fgets(word, BUFF, stdin);

	printf("Your original word is: %s", word);

	while(word[count] != '\0' )
	{
		count++;
	}

	printf("The reverse word is: ");
	while(count >= 0)
	{
		printf("%c", word[count]);
		count--;
	}
	
	printf("\n");
	return 0;
}
