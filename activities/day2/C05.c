#include <unistd.h>

void char_print(char *str)
{
	int n = 0;
	while(str[n] != '\0')
	{
		write(1, &str[n], 1);
		write(1, "\n", 1);
		n++;
	}
}

int main()
{
	char *str = "Hello World!";
	char_print(str);
	return 0;
}
