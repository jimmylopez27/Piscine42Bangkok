#include <unistd.h>

#define BUFF 30

void gen_rect (int len, int wid)
{
	int count = 0;
	int l = len;
	int w = wid;

	while (l >= 1)
	{
		w = wid;		

		if (l == len || l == 1)
		{
			while (w >= 1)
			{
				if (w == 1 || w == wid)
				{
					write(1, "o", 1);
					w--;
				}
				else
				{
					write(1, "-", 1);
					w--;
				}
			}
			write(1, "\n", 1);
		}
		
		if (l != len && l != 1)
		{
			while (w >= 1)
			{
				if (w == 1 || w == wid)
				{
					write(1, "|", 1);
					w--;
				}
				else
				{
					write(1, " ", 1);
					w--;
				}
			}
			write(1, "\n", 1);
		};

		l--;
	}
}

int int_converter(char *str)
{
	int num = 0; 
	int i = 0;

	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
	i++;
	}
	return num;
}

int main ()
{
	char length[BUFF];
	char width[BUFF];

	write(2, "Type your length here: ", 23);
	read(0, length, BUFF);
	write(2, "Type your width here: ", 22);
	read(0, width, BUFF);

	int len = int_converter(length);
	int wid = int_converter(width);
	
	gen_rect(len, wid);

	return 0;
}

