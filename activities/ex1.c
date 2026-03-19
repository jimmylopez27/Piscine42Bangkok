#include <stdio.h>
#include <stdlib.h>

#define BUFF 30

char *str_dup(char *str)
{
	int n = 0;
	int m = 0;

	while(str[n] != '\0')
	{
		n++;
	}

	char *temp = malloc(n + 1);
	char *start = temp;
	
	while (str[m] != '\0')
	{
		temp[m] = str[m];
		m++;
	}
	temp[n + 1] = '\0';
	
	return start;
}

int main()
{
	char word[BUFF];
	printf("Type your word here: ");
	scanf("%s", word);
	getchar(); 

	char *new_word = str_dup(word);
	printf("This is the old word: %s\n", word);
	printf("This is the new word: %s\n", new_word);

	return 0;
}
