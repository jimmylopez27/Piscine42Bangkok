#include <stdio.h>
#include <stdlib.h>

#define BUFF 30

char *space_rem(char *str)
{
	char *temp = str;
	char *start = temp;

	while (*str != '\0')
	{
		while (*str != '\0')
		{
			if (*str == ' ')
			{
				str++;
			}
		
			*temp = *str;
			str++;
			temp++;
		}
	}

	*temp = '\0';

	return start;
}


int main()
{
	char word[BUFF];
	char *newword;

	printf("Typw your word here: ");
	fgets(word, BUFF, stdin);

	newword = space_rem(word);
	
	printf("This is the new word: %s", newword);
	printf("This is the old wordL %s", word);
	
	return 0;
}
