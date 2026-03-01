#include <stdio.h>

#define BUFF 20

char *my_strcpy(char *dest, char *src)
{
	char *start = dest;
	while(*src != '\0')
	{
		*dest= *src;
		dest++;
		src++;
	}

	dest+= '\0';
	return start;
}

int main()
{
	char word[BUFF];
	char nword[BUFF];
	printf("Type your word here: ");
	fgets(word, BUFF, stdin);

	my_strcpy(nword, word);
	printf("This is  your word: %s\n", word);
	printf("This is the copied word: %s", nword);

	return 0;
}
