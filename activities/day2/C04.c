#include <unistd.h>

void print_pointer(int *num)
{
	char n = *num + '0';
	write(1, &n, 1);
	write(1, "\n", 1);
}

int main()
{
	int m = 4;
	print_pointer(&m);
	return 0;
}
