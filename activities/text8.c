#include <stdio.h>

#define BUFF 20

int main()
{
	char *word = "hello world";
	int count = 0;
	char new_word[BUFF];

	while (word[count] != '\0')
	{	
	
		if(word[count] != ' ')
		{
		 	new_word[count] = word[count];
		}
		
		printf("The new_word %d is: %c\n", count, new_word[count]);
				
		printf("The address of %c is: %p\n", word[count], word);
		count++;
		
	}


	printf("new_word is : %s", new_word);

	return 0;
}
