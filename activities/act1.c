#include <stdio.h>

#define BUFF 20

	int my_strlen (char *word)
	{
		int count = 0;
		for (int i = 0; i < BUFF; i ++)
		{
			if (word[i] == '\0')
			{
				break;
			}
			
			count++;
		}

		return count;
	}	



int main()
{

	printf("Test Case: ");
	
	char input[BUFF];
	scanf("%s", input);

	int length = my_strlen(input);

	printf("\nInput: %s\n", input);
	printf("Output: %d\n", length);
	
	return 0;

}
