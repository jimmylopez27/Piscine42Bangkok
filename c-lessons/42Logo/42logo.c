#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#define HEIGHT 20
#define WIDTH 100

#define BUFF 200

void plot(int x, int y);
int char_int(int str_num);

int main()
{
	char x;
	char y;
	char buff;
	write(1, "x coordinate: ", 14);
	read(0, &x, 1);
	read(0, &buff, 1);	

	write(1, "y coordinate: ", 14);
	read(0, &y, 1);
	read(0, &buff, 1);

	int x_int = char_int(x);
	int y_int = char_int(y);
	

//	printf("X = %d and Y = %d\n", x_int, y_int);
//	plot(x_int, y_int);	


	return 0;
}



int char_int(int str_num)
{
	char temp = str_num;
	int count = 0;

	while(temp != NULL)
	{
		count++;
		temp++;	
	}	 

	int int_num;
	
	while(count > 0)
	{
		int_num = (str_num % 10) + '0';
		count--;
		int_num++;
		str_num = str_num / 10;
	}
	
	return int_num;
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
