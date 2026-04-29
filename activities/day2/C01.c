#include <unistd.h>
#include <stdio.h>

void pointer_num(int *n)
{
	*n = 42;
}

int main()
{
	int x = 0;
	pointer_num(&x);
	printf("%d\n", x);

	return 0;
}
