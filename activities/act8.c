#include <stdio.h>

#define BUFF 20

void space_rem(char *s, char *write)
{
	int counter1 = 0;
	int counter2 = 0;

	while(s[counter1] != '\0')
	{
		if(s[counter1] != ' ')
		{
			write[counter2] = s[counter1];
			counter2++;
		}
		
		counter1++;
	}

	write[counter2] = '\0';
}

int main()
{
	char word[BUFF];
	printf("Type your text here: ");
	fgets(word, BUFF, stdin);
	printf("This is your word: %s", word);
	
	char newword[BUFF];
	
	space_rem(word, newword);
	printf("The new word is: %s", newword);

	return 0;
}
