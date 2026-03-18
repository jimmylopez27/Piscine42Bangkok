#include <stdio.h>
#include <stdlib.h>

#define BUFF 30

char *my_strdup(char *s)
{
	int count = 0;
	while (s[count] != 0)
	{
		count++;
	}

	char *new_str = malloc(count + 1);
	if(new_str == NULL) return NULL;
 
	char *new_start = new_str;	

	while (count > 0)
	{
		*new_str = *s;
		new_str++;
		s++;
		count--;
	}

	*new_str = '\0';

	return new_start;	
}

int main()
{
	char word[BUFF];
	printf("Type your word here: ");
	scanf("%s", word);

	char *word2 = my_strdup(word);
	printf("This is the new copied word: %s\n", word2);

	free(word2);

	return 0;
}
