#include <stdio.h>
#include <string.h>

int strLen(const char *str);
void vowelConsonantCount(const char *str, int *vowels, int *consonants);
void countWords(const char *str, int *words);

int main()
{
  char str[] = "Hello, World! This is a test string.";

  int vowels, consonants, words;
  vowelConsonantCount(str, &vowels, &consonants);

  printf("Vowels: %d\n", vowels);
  printf("Consonants: %d\n", consonants);

  countWords(str, &words);
  printf("Words: %d\n", words);

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

void vowelConsonantCount(const char *str, int *vowels, int *consonants)
{
  int i;
  *vowels = 0;
  *consonants = 0;

  for (i = 0; i < strLen(str); i++)
  {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
        str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
    {
      (*vowels)++;
    }
    else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
    {
      (*consonants)++;
    }
  }
}

void countWords(const char *str, int *words)
{
  int i;
  *words = 0;

  while (str[i] != '\0')
  {

    if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
    {
      (*words)++;
    }

    i++;
  }

  (*words)++;
}
