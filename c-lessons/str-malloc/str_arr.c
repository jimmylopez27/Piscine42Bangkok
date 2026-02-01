#include <stdio.h>
#include <stdlib.h>

#define Max_Buff 20
#define Arr_Size 3

int main()
{
	char str[Max_Buff];
	int *arr[Arr_Size];	

	printf("Type your word here: ");
	fgets(str, Max_Buff, stdin);

	for (int i = 0; i < Arr_Size; i ++)
	{
		arr[i] = malloc(Arr_Size * sizeof(char));
	}

	
	

}
