#include <stdio.h>

#define BUFF 20

char *my_strcat(char *s1, char *s2)
{
	char *p = s1;

	while (*p != '\0')
	{
		p++;
	}

	while (*s2 != '\0')
	{
		*p = *s2;
		p++;
		s2++;
	}

	return s1;
}

int main()
{
	char word1[BUFF];
	char word2[BUFF];

	printf("Type your first word here: ");
	scanf("%s", word1);
	printf("Type your second word here: ");
	scanf("%s", word2);

	printf("This is the original word1: %s\n", word1);
	
	my_strcat(word1, word2);

	printf("This is the new word1: %s\n", word1);

	return 0;
}
