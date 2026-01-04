#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main()
{
 int n = 0;

 char buff[5];
 
 printf("Type your text here: ");
 scanf("%s", buff);

 printf("This is your text %s\n", buff);

 return 0;
}
