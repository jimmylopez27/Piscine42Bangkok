#include <stdio.h>

	int my_strcpy(char *new_box, char *old_box)
	{
		int temp;
		temp = &old_box;
		new_box = temp;

		return old_box, new_box;
	}

int main()
{
	

}
