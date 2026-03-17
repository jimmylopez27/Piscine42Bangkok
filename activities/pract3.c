#include <stdio.h>

#define BUFF 20

int str_count(char *str)
{
	int num = 0;
	
	while (*str != '\0')
	{
		if (*str == ' ')
		{
			str++;
		}
		
		if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
		{
			num++;
		}

		str++;
	}	

	return num;
}

int main()
{
	char word[BUFF];
	printf("Type your word here: ");
	fgets(word, BUFF, stdin);	

	int vowel_count = str_count(word);

	printf("The number of vowels in that word is %d\n", vowel_count);

	return 1;
}
