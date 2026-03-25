#include <unistd.h>

#define BUFF 20

int main()
{
	char word[BUFF];
	write(1, "Type your word here: ", 21 );
	read(0, word, BUFF);
	write(1, "Here is your typed word: ", 25);
	write(1, word, 5);
	write(1, "\n", 1);
	
	return 0;
}
