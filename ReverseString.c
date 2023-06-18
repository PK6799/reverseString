#include <stdio.h>
void reverseString(char *str) 
{
  int len = strlen(str);
  int i, j;
  char temp;
  for (i = 0, j = len - 1; i < j; i++, j--) 
  {
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
   }
 }
int main() 
{
  char str[100];
  printf("Enter a string: ");
  scanf("%s", str);
  reverseString(str);
  printf("The reversed string is: %s\n", str);
  return 0;
 }
