#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n;
 printf("How many numbers you want? ");
 scanf("%d", &n);

 int *pmem;
 pmem = malloc(n * sizeof(int));

 if (pmem == NULL)
 {
  printf("Memory allocation FAILED!");
  return 1;
 }

 int arrnum[*pmem];
 for (int i = 0; i < n; i ++)
 {
  printf("Type your number %d: ", i);
  scanf("%d", &arrnum[i]);
 } 

 int repnum = arrnum[0];
 for (int i = 0; i < n; i ++)
 {
  if (arrnum[i] != repnum)
  {
   repnum = arrnum[i];
  }
 }

 printf("\n The rep num is: %d\n", repnum);
 
}
