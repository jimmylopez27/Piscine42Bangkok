#include <stdio.h>
#include <stdlib.h>

#define BUFF 20

char *str_separator(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		while (*str != ' ')
		{
			char *str{count} = str;
			str{count}++;
			str++;
		}

		count++;		
	}

	*str{count} = '\0';

	return str{count};
}

int main()
{
	char word[BUFF];
	printf("Type your sentence here: ");
	fgets(word, BUFF, stdin);
	
	char *word1 = str_separator(word);

	printf("The new word is: %s", word1);

	return 0;
}
