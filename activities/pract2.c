#include <stdio.h>

#define BUFF 20

void my_strcpy(char *dest, char *src)
{
	while(*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0'; 
}

int main()
{
	char wordA[BUFF];
	char wordB[BUFF];

	printf("Type your word here: ");
	scanf("%s", wordA);

	my_strcpy(wordB, wordA);	

	printf("First: %c\n", wordB[0]);
	printf("This is your word being copied: %s\n", wordB);

	return 1;

}
