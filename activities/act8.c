#include <stdio.h>

#define BUFF 20

char space_rem(char *s)
{
	char *read = s;
	char *write = s;

	while (*read != '\0')
	{
		if (*s != ' ')
		{
			s++; 
		}
		
		write = s;
		
		read++;
	}

	write = '\0';	
	
	return *write;
}

int main()
{
	char word[BUFF];
	printf("Type your text here: ");
	fgets(word, BUFF, stdin);
	printf("This is your word: %s", word);
	
	char newword[BUFF];
	
	*newword = space_rem(word);
	printf("The new word is: %s", newword);

	return 0;
}
