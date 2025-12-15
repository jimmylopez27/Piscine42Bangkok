#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n;
 
 int *pmem;

 printf("How many entries you want?: ");
 scanf("%d", &n);

 pmem = malloc(n * sizeof(int));

 int num[*pmem]; 

 for (int i = 0; i < n; i ++ )
 {
  printf("%d number: ", i);
  scanf("%d", &num[i]);
 
 };

 free(pmem);

 for (int j = 0; j < n; j ++)
 {
  printf("Data %d %d\n" ,j, num[j]);

 }

 return 0;

}
