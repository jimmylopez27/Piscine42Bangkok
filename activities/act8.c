#include <stdio.h>

#define BUFF 20

char *space_rem(char *s)
{
	char *read = s;
	char *write = s;
	
	while (*read != '\0')
	{
		
		if (*s == ' ')
		{
			write++;
		}
		s++;
		}
	
	*write = '\0';

	return s;
}

int main()
{
	char word[BUFF];
	printf("Type your word here: ");
	fgets(word, BUFF, stdin);
	printf("The word you type is: %s", word);

	space_rem(word);
	printf("Your new word is: %s", word);

	return 0;

}
