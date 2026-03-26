#include <unistd.h>

#define BUFF 1000

int char_count(char *chars)
{
	int i = 0;
	
	while(chars[i] != '\0')
	{
		i++;
	}

	return i;
}

char int_to_char(int num)
{
	int i = 0;
	char *str;

	while(num[i] >= '0' && num[i] <= '9')
	{
		str = str * 10 + (num[i] - 0);
		i++;
	}

	return *str;
}

int main ()
{
	char word[BUFF];
	
	write(1, "Write your words here: ",23 );
	read(1, word, BUFF);
	
	int len = char_count(word);
	
	write(1, word, len);
	
	char lenchar = int_to_char(len);
	write(1, lenchar, len);

	return 0;
}
