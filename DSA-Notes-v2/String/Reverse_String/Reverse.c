#include <stdio.h>
#include <string.h>

void reverse(char *str);
void reverse2(char *str);

int main()
{
  char str[] = "HelloWorld";
  reverse(str);
  printf("Reversed String: %s\n", str);

  char str2[] = "HelloWorld";
  reverse2(str2);
  printf("Reversed String: %s\n", str2);


  return 0;
}

void reverse(char *str)
{

  int i = 0;
  int j = strlen(str) - 1;
  char temp[j];

  while (i < j)
  {
    temp[i] = str[i];
    str[i] = str[j];
    str[j] = temp[i];
    i++;
    j--;
  }
}

void reverse2(char *str)
{
  int i = 0;
  int j = strlen(str) - 1;

  while (i < j)
  {
    str[i] = str[i] + str[j];
    str[j] = str[i] - str[j];
    str[i] = str[i] - str[j];
    i++;
    j--;
  }
}