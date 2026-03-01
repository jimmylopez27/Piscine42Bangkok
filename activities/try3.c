#include <stdio.h>

#define BUFF 20

int count_vowels(char *str)
{
	int count = 0;
	while(*str != '\0')
	{
		if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
		{
			count++;
		}
		str++;	
	}	

	return count;
}

int main()
{
	char word[BUFF];
	printf("Type your word here: ");
	fgets(word, BUFF, stdin);
	
	int n = count_vowels(word);
	printf("There are %d vowels in that word\n", n);

	return 0;
}
