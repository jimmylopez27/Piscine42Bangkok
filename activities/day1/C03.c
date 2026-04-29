#include <unistd.h>

int main()
{
	int n = 97;
	while(n <= 122)
	{
		char m = (char)n;
		write(1, &m, 1);
		write(1, "\n", 1);
		n++;
	}
	return 0;
}
