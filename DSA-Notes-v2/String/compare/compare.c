#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindrome(char *str) {
  int i, j;
  for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
    if (str[i] != str[j]) {
      return 0;
    }
  }
  return 1;
}

// Function to compare two strings
int compareStrings(char *str1, char *str2) {
  int i, j;
  for (i = 0, j = 0; str1[i] != '\0' && str2[j] != '\0'; i++, j++) {
    if (str1[i] != str2[j]) {
      break;
    }
  }
  if (str1[i] == '\0' && str2[j] == '\0') {
    return 0; // Strings are equal
  }
  return str1[i] - str2[j];
}

int main() {
  char str1[] = "Hello";
  char str2[] = "Hello";

  int cmpResult = compareStrings(str1, str2);

  if (cmpResult == 0) {
    printf("Strings are equal\n");
  } else if (cmpResult < 0) {
    printf("str1 is less than str2\n");
  } else {
    printf("str1 is greater than str2\n");
  }

  if (isPalindrome(str1)) {
    printf("String is palindrome\n");
  } else {
    printf("String is not palindrome\n");
  }

  return 0;
}