#include <stdio.h>
#include <stdlib.h>


int main()
{
 int n = 0;

 int *pmemory;

 printf("Type how many array strings you want: ");
 scanf("%d", &n);

 pmemory = malloc(n * sizeof(char));

 char *arrayStr[*pmemory];
 
 for (int i = 0; i < n; i ++)
 {
  printf("String %d: ", i + 1);
  scanf("%s",&arrayStr[i]);
 };
 
 for (int j = 0; j < n; j ++)
 {
  printf("String %d : is %s",  j + 1, arrayStr[j]);
 };  
 
 free(pmemory);

 return 0;
 
}

