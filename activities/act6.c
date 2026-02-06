#include <stdio.h>
#include <stdlib.h>

#define BUFF 20

char my_strcat(char *s1, char *s2) 
{ 
	*s1 = *s1 + *s2;
	return *s1;
}

int main()
{
	char word1[BUFF];
	char word2[BUFF];

	printf("Type your first word: ");
	fgets(word1, BUFF, stdin);

	printf("Type your second word: ");
	fgets(word2, BUFF, stdin);

	my_strcat(word1, word2);

	printf("The new word is: %s", word1);
	
	return 0;
}
