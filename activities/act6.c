#include <stdio.h>
#include <stdlib.h>

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

	*p = '\0';

	return s1;
}

int main()
{
	char word1[BUFF];
	char word2[BUFF];

	printf("Type your first word: ");
	scanf("%s", word1);

	printf("Type your second word: ");
	scanf("%s", word2);

	my_strcat(word1, word2);

	printf("The new word is: %s\n", word1);
	
	return 0;
}
