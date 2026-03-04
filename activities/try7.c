#include <stdio.h>
#include <stdlib.h>

#define BUFF 20

int str_len(char *str)
{
	int len = 0;
		
	while(*str != '\0')
	{
		len ++;
		str++;
	}

	return len;
}

int main()
{
	char word[BUFF];
	printf("Type your word: ");
	scanf("%s", word);

	int word_len = str_len(word);

	printf("The length of the word is: %d\n", word_len);

	char *new_str = malloc((word_len + 1)*sizeof(char));
	char *start = new_str;

	int n = 0;
	while(n < word_len )
	{
		*new_str = word[n];
		new_str++;
		n++;
	}	

	*new_str = '\0';

	printf("The new copied word is: %s\n", start);

	free(start);

	return 0;
}
