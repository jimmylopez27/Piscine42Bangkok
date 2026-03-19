#include <stdio.h>

#define BUFF 20

int mystery_len(char *s)
{
    int i = 0;
    while (s[i] != '\0')  // bug here
    {
        i++;
    }
    return i;
}

int main()
{
	char word[BUFF];
	printf("Type your word here: ");
	scanf("%s", word);
	
	int count = mystery_len(word);

	printf("The length of the word is: %d\n", count);

	return 0;
}
