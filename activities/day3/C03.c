#include <unistd.h>

void strn_cpy(char *dst, char *src, unsigned int n)
{
	unsigned int i = 0;

	while(i < n && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}	

	if(i < n)
	{
		while(i < n)
		{
			dst[i] = '\0';
			i++;
		}
	}
}

int main()
{
	char *str = "Hello";
	char nwstr[100]; 
	unsigned int n = 2;
	strn_cpy(nwstr, str, n);
	return 0;
}
