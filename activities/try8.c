#include <stdio.h>

#define BUFF 20

char *space_rem(char *str)
{
	char *new_str = str;
	char *temp = new_str;

	while(*str != '\0')
	{
		if(*str != ' ')
		{
			*new_str = *str;
			new_str++;
		}

		str++;
	}

	*new_str = '\0';

	return temp;
}

int main()
{
	char word[BUFF];
	printf("Type your words here: ");
	fgets(word, BUFF, stdin);

	
	char *new_word = space_rem(word);
	printf("The new word is: %s", new_word);

	return 0;
}
