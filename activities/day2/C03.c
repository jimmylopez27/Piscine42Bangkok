#include <unistd.h>

void divider(int a, int b, int *quo, int *rem)
{
	*quo = a / b; // qoutient
	*rem = a % b; // remainder
}

char int_to_char(int a)
{
	char m = a + '0';
	return m;
}

int main()
{
	int a = 9, b = 3;	
	int x, y;
	divider(a, b, &x, &y);
	char na, nb;
	na = int_to_char(x);
	nb = int_to_char(y);
	
	write(1, &na, 1);
	write(1, "\n", 1);
	write(1, &nb, 1);	
	write(1, "\n", 1);

	return 0;
}
