#include <stdio.h>


int main()
{

	char *str = "Hello World";
	int count = 1;

	while (*str != '\0')
	{
		if (*str == ' ')
		{
			str++;
		}
		
		str++;
	}
	
	printf("The total char in the word %s is: %d\n", str, count);
	return 0;	

}
