#include <unistd.h>
#include <stdio.h>

void swap_num(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

char int_to_char(int n)
{
	char m = n + '0';
	return m;
}

int main()
{
	int a = 0;
	int b = 1;
	swap_num(&a, &b);
	
	char na = int_to_char(a);
	char nb = int_to_char(b);
	
	write(1, &na, 1);	
	write(1, &nb, 1);
	write(1, "\n", 1);	

	swap_num(&a, &b);

	char nc = int_to_char(a);
	char nd = int_to_char(b);
	
	write(1, &nc, 1);	
	write(1, &nd, 1);
	write(1, "\n", 1);	

	return 0;
}
