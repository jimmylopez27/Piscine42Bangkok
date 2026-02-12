#include <stdio.h>

#define BUFF 20

char *space_rem(char *s)
{
	char *temp = s;

	while(*s != '\0')
	{
		if (*s != ' ')
		{
			*temp = *s;
			temp++;
			s++;
		}

	}
	
	*temp = '\0'; 

	return temp;
}

int main()
{
	char word[BUFF];
	printf("Type your word here: ");
	fgets(word, BUFF, stdin);

	printf("This is your word: %s", word);
	
	char *newWord = space_rem(word);
	printf("This is your new word: %s\n", newWord);
	 
	return 0;
}
