#include <stdio.h>

#define BUFF 20

int str_len(char * s)
{
	int count = 0;
	while(*s != '\0')
	{
		count ++;
		s++;
	}
	
	return count-1; 
}

int main()
{
	char *word;
	printf("Type your word here: ");
	fgets(word, BUFF, stdin);

	printf("The word is: %s", word);

	int len = str_len(word);
	printf("The length length of the word is: %d\n", len);
	
	return 0;		

}
