#include <stdio.h>

#define BUFF 20

char *space_rem(char *s)
{
	char *read = s;
	char *write = s;
		
	while (*read != '\0')
	{
		if (*read != ' ')
		{
			*write = *read;
			write++;
		}

		read++;	
	}

	*write = '\0';

	return s;
}

int main()
{
	char word[BUFF];
	
	printf("Type your word here: ");
	fgets(word, BUFF, stdin);

	printf("This is the original word: %s", word);
	char *newWord = space_rem(word);
	printf("This is the new word: %s", newWord);	
	
	return 0;	
}
