#include <unistd.h>

int main()
{
	int n = 0;
	while(n <= 9)
	{
		char m = n + '0';
		write(1 , &m, 1);
		write(1, "\n", 1);
		n++;
	}
	return 0;
}
