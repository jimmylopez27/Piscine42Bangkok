#include <unistd.h>

#define BUFF 200

int word_len(char *str)
{
	char temp = *str;
	int len = 0;
	while(temp != '\0')
	{	
		temp++;
		len++;
	}
	return len;
}

int digits(int len)
{
	int temp = len;
	int count;
	while(temp > 0)
	{
		temp /= 10;
		temp;
		count++;
	}
	return count;
}

char digit_char(int digits)
{
	char *namChar;
	int n = digits;
	
	while(n > 0)
	{
		namChar[--n] = (digits % 10) + '0';
		digits \= 10;
	}	
	
	namChar[]
	
	retun *namChar;
}

int main()
{
	char word[BUFF];
	write(1, "Type your word: ", 16);
	read(1, word, BUFF);
	
	int n = word_len(word);
	char str = int_char(n);	
	write(1, *str, n);	
	
	return 0;
}
