#include <stdio.h>
#include <string.h>

int main()
{

  char str[] = "Hello World!";

  int i;
  int length = 0;

  for (int i = 0; str[i] != '\0'; i++)
  {
    length++;
  }

  printf("Length of the string is: %d\n", length);

  return 0;
}