#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFF 200

int word_len(char *str);
int digits(int len);
char *digits_char(int digits, int len);
void newline_remover(char *word, int bytes);

int main()
{
	char word[BUFF];
	write(1, "Type your word: ", 16);
	ssize_t bytes;
	bytes = read(0, word, BUFF);	
	newline_remover(word, bytes);

	int len = word_len(word);
	int dig = digits(len);
	char *str = digits_char(len, dig);

	write(1, "The length of the word is: ", 27);	
	write(1, str, dig);
	write(1, "\n", 2);

	return 0;
}

















int word_len(char *str)
{
	char *temp = str;
	int len = 0;
	while(*temp != '\0')
	{	
		temp++;
		len++;
	}
	printf("The length is %d\n", len);
	return len;
}

int digits(int len)
{
	int count = 0;
	if(len == 0)
	{
		return 1;
	}

	while(len > 0)
	{
		len = len / 10;
		count++;
	}
	printf("The count is:  %d\n", count);
	return count;
}

char *digits_char(int digits, int len)
{
	int n = len;
	char *namChar = malloc(len + 1);
	
	if(!namChar)
	{
		return NULL;
	}
	
	while(n > 0)
	{
		namChar[--n] = (digits % 10) + '0';
		digits = digits / 10;
	}
	
	namChar[len] = '\0';
	return namChar;
}

	
void newline_remover(char *word, int bytes)
{
    int i = 0;

    while (i < bytes)
    {
        if (word[i] == '\n')
        {
            word[i] = '\0';
            return;
        }
        i++;
    }

    // fallback (no '\n' found)
    word[bytes] = '\0';
}




