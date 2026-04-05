#include <unistd.h>

#define BUFF 200

void plot(int x, int y);
int char_int(char *str_num);

int main()
{
	char x[BUFF], y[BUFF];
	int bytes;

	write(1, "x coordinate: ", 14);
	bytes = read(0, x, BUFF - 1);
	if(bytes > 0 && x[bytes -1] == '\n')
	{
		x[bytes - 1] = '\0';
	}
	else x[bytes] = '\0';
		
	

	write(1, "y coordinate: ", 14);
	bytes = read(0, y, BUFF - 1);	
	if(bytes > 0 && y[bytes -1] == '\n')
	{
		y[bytes - 1] = '\0';
	}
	else y[bytes] = '\0';
	

	int x_int = char_int(x);
	int y_int = char_int(y);
	

	plot(x_int, y_int);	


	return 0;
}



int char_int(char *str_num)
{
	int int_num = 0;
	int i = 0;	

	while(str_num[i] >= '0' && str_num[i] <= '9')
	{
		int_num = int_num * 10 + (str_num[i] - '0');
		i++;
	}
	
	return int_num;
}

void plot(int x, int y)
{
   int ycounter = 0;

    while (ycounter <= y)
    {
        int xcounter = 0;

        while (xcounter <= x)
        {
            if (xcounter == x && ycounter == y)
                write(1, "#", 1);
            else
                write(1, " ", 1);

            xcounter++;
        }

        write(1, "\n", 1);
        ycounter++;
    }
}


