#include <unistd.h>

int main()
{
	int n = 9;
	while(n >= 0)
	{
		char m = n + '0';
		write(1, &m, 1);
		write(1, "\n", 1);
		n--;
	}
	return 0;
}
