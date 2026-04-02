#include <unistd.h>
#include <stdbool.h>

// #define HEIGHT 37
// #define WIDTH 131

int char_to_int(char *str)
{
	char temp = *str;
	int n = 0;

	while(str[n] != '\0')
	{
		n++;
	}

	int num;
	while(n > 0)
	{
		num[--n] = (temp % 10) + '0';
	}

	return num;
}

void plot(int x, int y)
{
	int xcounter = 0;
	int ycounter = 0;

	while(ycounter <= y)
	{
	
		if(ycounter == y)
		{
			while(xcounter <= x)
			{
				if(xcounter == x)
				{
					write(1, "#", 1);
					write(1, "\n", 1);
				}
				else
				{
					write(1, " ", 1);
				}
				xcounter++;
			}
		}
		else
		{
			write(1, "\n", 1);
		}

		ycounter++;
	}

}

int main()
{
	int x = 0, y = 0;
	write(1, "x coordinate: \n", 17);
	read(1, x, 1);
	write(1, "y coordinate: \n", 17);
	read(1, y, 1);

	char_to_int(x, y);		
	
	plot(x, y);	

	return 0;
}
