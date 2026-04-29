#include <unistd.h>

int main()
{
	int n = 48;
	while(n <= 57)
	{
		int m = 48;
		char x = (char)n;
		while(m <= 57)
		{
			char y = (char)m;
			write(1, &x, 1);
			write(1, &y, 1);
			write(1, "\n", 1); 
			m++;
		}
		n++;
	}	
	return 0;
}
