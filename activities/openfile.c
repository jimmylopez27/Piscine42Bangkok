#include <unistd.h>

#define BUFF 1000

int char_count(char *str)
{
	int i = 0;
	
	while(str[i] != '\0')
	{
		i++;
	}

	return i;
}

void int_to_char(int num_length, char *str_length)
{
	int n = num_length;
	int m = 0;
	int i = 0;

	if(num_length == 0)
	{
		str_length[i++] = '0';
		str_length[i] = '\0';
		return;
	}

	while(n > 0)
	{
		n = n / 10;
		m++;
	}	
	
	str_length[m] = '\0';
	
	while(m > 0)
	{
		str_length[--m] = (num_length % 10) + '0';
		num_length = num_length / 10;
	}
}

int main()
{
	char word[BUFF];
	int word_length;
	char digits_length[BUFF];

	write(1, "Type your word here: ", 21);
	read(0, word, BUFF - 1);	
	int n = char_count(word);
	

	word_length = char_count(word);
	
	
	write(1, "\n", 2);
	write(1, "Your word is: ", 14);
	write(1, word, word_length);	
	
	int_to_char(word_length, digits_length);	

	write(1, "The length of the word is: ", 27); 
	write(1, digits_length, char_count(digits_length));
	write(1, "\n", 2);
	write(1, "\n", 2);
	


	return 0;
}

