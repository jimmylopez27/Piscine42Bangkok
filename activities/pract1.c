#include <stdio.h>

#define BUFF 20

int str_count(char *str)
{
	int count = 0;
	while(*str != '\0')
	{
		count++;
		str++;
	}

	return count;
}

int main()
{
	char word[BUFF];
	printf("Type your word here: ");
	scanf("%s", word);

	int word_len = str_count(word);

	printf("The length of the word is: %d\n", word_len);

	return 1;
}

