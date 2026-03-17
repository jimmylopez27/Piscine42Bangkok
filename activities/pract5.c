#include <stdio.h>
#include <stdlib.h>

#define BUFF 20 

char *str_reverse(char *str)
{
	char *temp = str;
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	
	char *new_str = malloc(count + 1);
	char *start = new_str;
	
	while(count >= 0)
	{
		*new_str = temp[count - 1];
		count--;
		new_str++;
	}

	*new_str = '\0';

	return start;
}

int main()
{
	char word[BUFF];
	char *capture;
	printf("Type your word here: ");
	scanf("%s", word);
	getchar();

	capture = str_reverse(word);

	printf("first: %c\n", capture[0]);
	printf("The reverse word is: %s\n", capture);

	return 0;
}
