#include <unistd.h>

#define BUFF 

void fill(int w, int h); // w = width, h = height, str = the character that will be used to fill the screen

int main()
{
	fill(208, 54);

	return 0;
}


void fill(int w, int h) // w = width, h = height, str = the character that will be used to fill the screen
{
	int wd = w;
	int ht = h;
	int wdh = w / 2;
	int hth = h / 2;
	
	while(ht > 0)
	{
		wd = w;
		while (ht >= hth && ht <= hth - 3)
		{
			write(1, " ", 1);
			wd--;
		
			ht--;
		}

		while(wd > 0)

		{
			while (wd >= wdh + 4 && wd <= wdh + 12)
			{
				write(1, " ", 1);
				wd--;
			}

			write (1, "#", 1);
			wd--;	
		
		}
				
		ht--;
	}

}
