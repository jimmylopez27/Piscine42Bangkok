#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFF 100

char *str_split(char *str)
{
	int n = 0;
	int count = 0;
	int m = 1;
	char *start;

	while (*str != '\0')
	{
		count = 0;
		n = 0;	

		while (str[n] != ' ' && str[n] != '\0')
		{
			count++;
			n++;
		}
	
		char *temp = malloc(count + 1);
		start = temp;

		while (*str != ' ' && *str != '\0')
		{
			*temp = *str;
			temp++;
			str++;
		}
		
		*temp = '\0';
		printf("Word %d is: %s\n", m, start);

		free(start);
		
		m++;
		if (*str == ' ') str++;
	}
	
	return start;
}

int main()
{
	char word[BUFF];
	printf("\n");
	printf("Type your word here: ");
	word[strcspn(word, "\n")] = '\0';
	fgets(word, BUFF, stdin);

	printf("\n");	

	str_split(word);

	printf("\nOld word: %s\n", word);	

	return 0;
}
