#include <stdio.h>
#include <stdlib.h>

#define BUFF 20

char *my_strdup(char *s)
{
	int count = 0;
	char *temp = s;	

	while (*temp != '\0')
	{
		temp++;
		count++;
	}	

	char *p = malloc(count + 1);
	if (p == NULL) return NULL;	

	for (int i = 0; i < count; i ++)
	{
		p[i] = s[i]; 
	}
	
	p[count] = '\0';	

	return p;
}


int main()
{
	char word[BUFF];
	printf("Type your word here: ");
	fgets(word, BUFF, stdin);
	
	char *newWord = my_strdup(word);

	printf("This is the word with memory alloc: %s\n", newWord);

	free(newWord);
	return 0;
}
