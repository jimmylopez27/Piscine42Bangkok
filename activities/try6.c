#include <stdio.h>
#include <string.h>

#define BUFF 20

void  my_strcat(char *s1, char *s2)
{
	while(*s1 != '\0')
	{
		s1++;
	}

	while(*s2 != '\0')
	{
		*s1 = *s2;
		s2++;
		s1++;
	}

	*s1 = '\0';

}

int main()
{
	char word1[BUFF];
	char word2[BUFF];
	printf("Type your first word: ");
	fgets(word1, BUFF, stdin);
	printf("Type your second word: ");
	fgets(word2, BUFF, stdin);
	word1[strcspn(word1, "\n")] = '\0';
   	word2[strcspn(word2, "\n")] = '\0';
	
	printf("Word1: %s, Word2: %s", word1, word2);
	my_strcat(word1, word2);
	
	printf("\nThe new word1 is: %s\n", word1);
	
	return 0;
}
