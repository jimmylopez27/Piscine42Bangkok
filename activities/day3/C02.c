#include <unistd.h>

void str_cpy(char *orig, char *copy)
{
	int counter = 0;
	while(orig[counter] != '\0')
	{
		copy[counter] = orig[counter];
		counter++;
	}
	copy[counter] = '\0';
}

int main()
{
	char *str = "Hello";
	char newstr[100];
	str_cpy(str, newstr);
	
	return 0;
}
