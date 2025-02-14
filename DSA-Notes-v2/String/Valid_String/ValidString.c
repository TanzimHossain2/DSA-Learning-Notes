#include <stdio.h>
#include <string.h>

int validString(char *str)
{

  int i = 0;

  while (str[i] != '\0')
  {

    if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122 || str[i] >= 48 && str[i] <= 57)
    {
      i++;
    }
    else
    {
      return 0;
    }

    return 1;
  }
}

int main()
{

  char str[] = "HelloWorld123#";
  if (validString(str))
  {
    printf("Valid String\n");
  }
  else
  {
    printf("Invalid String\n");
  }

  return 0;
}