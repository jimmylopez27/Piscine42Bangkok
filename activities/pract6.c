#include <stdio.h>
#include <stdlib.h>

#define BUFF 50

char str_concat(char *str1, char *str2)
{
	char *temp = str1;
	while (*str1 != '\0')
	{
		str1++;
	}

	while (*str2 != '\0')
	{
		*str1 = *str2;
		str1++;
		str2++;
	}

	*str1 = '\0';

	return *temp;
}

int main()
{
	char word1[BUFF];
	char word2[BUFF];
	printf("Type the first word here: ");
	scanf("%s", word1);
	printf("Type your second word here: ");
	scanf("%s", word2);

	str_concat(word1, word2);
	printf("This is the new word1: %s\n", word1);

	return 0;
}
