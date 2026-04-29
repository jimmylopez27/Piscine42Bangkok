#include <unistd.h>
#include <stdio.h>

int str_length(char *str)
{
	int len = 0;
	while(str[len] != '\0')
	{
		len++;
	}
	return len;
}

void num_printer(int len)
{
	int temp = len;
	int n = 0;
	while(len != 0)
	{
		len = len / 10;
		n++;
	}

	int pow = 0;
	int base = 10;

	if(n != 1)
	{
		while((n-2) > 0)
		{
			pow = base*10;
			base = pow;
			n--;
		}	
	}
	if(n == 1)
	{
		base = 1;
	}

	int new_num = temp;
	int store;
	while(n > 0)
	{
		char m;
		store = new_num / base;
		m = store + '0';
		write(1, &m, 1);
		new_num = temp % base;
		base = base / 10;
		n--;
	}
	write(1, "\n", 1);
}

int main()
{
	char *str = "Hello World! This is me doing the code";
	int len = str_length(str);
	num_printer(len);
	return 0;
}
