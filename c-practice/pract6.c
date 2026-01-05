#include <stdio.h>

int main()
{

 
 printf("\nType the number here: ");
 int num;
 scanf("%d", &num);

 float remaindernum =  num % 10; 
 float wholenum = (num / 10); 
 
 printf("Whole number: %.0f \nRemainder: %.0f \n", wholenum, remaindernum);

 printf("The reverse of the number %d is: %.0f%.0f\n\n", num, remaindernum, wholenum);
 
 return 0;   


}
