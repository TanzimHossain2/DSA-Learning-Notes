#include <stdio.h>
#include <string.h>

void UpperCase(char *str);
void LowerCase(char *str);
int strLen(const char *str);

int main()
{
  char str[] = "Hello, World!";
  UpperCase(str);
  printf("%s\n", str);
  LowerCase(str);
  printf("%s\n", str);

  return 0;
}

int strLen(const char *str)
{
  int i = 0;
  while (str[i] != '\0')
  {
    i++;
  }
  return i;
}

void UpperCase(char *str)
{
  for (int i = 0; i < strLen(str); i++)
  {
    if (str[i] >= 'a' && str[i] <= 122)
    {
      str[i] -= 32;
    }
  }
}

void LowerCase(char *str)
{
  for (int i = 0; i < strLen(str); i++)
  {
    if (str[i] >= 'A' && str[i] <= 90)
    {
      str[i] += 32;
    }
  }
}
