# String

1. ASCII Codes
   A->65 a->97
   0->48 9->57
   space->32
   ....more
   start from 0 to 127. 7 bits are used. Computer stores 8 bits. 1 bit is used for error checking.

2. Unicode
   Unicode use 2 bytes. 16 bits memory. 2^16=65536. 65536 characters can be stored.
   4 x 4 bits . CO3A is the code for A. 4 x 4 bits = 16 bits.

3. String
   char temp;
   temp ='a'; valid
   temp = "a"; invalid
   temp = 'ab'; invalid

here temp variable store the address of a (97) in the memory.

if we printf("%c",temp); then it will print a.
and if we printf("%d",temp); then it will print 97. it shows the ASCII value of a which is stored in temp.

char x[10]; // x is an array of 10 characters.
char x[10]={'h','e','l','l','o','\0'}; // x is an array of 10 characters. 5 characters are stored in it. 6th character is null character.
char x[] = {'h','e','l','l','o','\0'}; // here we don't need to specify the size of the array. it will automatically calculate the size of the array.
char x[5]= {97,98,99,100,101}; // here we can also store the ASCII values of the characters.

char name[10]= {'j','o','h','n','\0'};

---

|J|O|H|N|\0| | | | | |

---

0 1 2 3 4 5 6 7 8 9

we use \0 to terminate the string. it is called null character. it is used to tell the computer that the string is ended here. it also called String delimiter.

now write string.
char name [] = {'j','o','h','n','\0'}; //size automatically calculated.

char name[] = "john; //we write inside the double quotes. it is also a string. it is also terminated by \0. C/C++ compiler handle it automatically.

for print we use
printf("%s",name); // %s is used to print the string.

for reading the string we use
scanf("%s",name); // %s is used to read the string.

# String Manipulation Implementations

This directory contains various string manipulation algorithms and their implementations in C.

## 1. Anagram Check (Anagram/Anagram.c)

- Checks if two strings are anagrams using a hash table approach
- Time Complexity: O(n)
- Space Complexity: O(1)

## 2. Valid String Check (Valid_String/ValidString.c)

- Validates if a string contains only alphanumeric characters
- Checks for characters in ranges: A-Z, a-z, 0-9
- Time Complexity: O(n)

## 3. String Reversal (Reverse_String/Reverse.c)

Two implementations:

1. Using temporary array
2. Using XOR swap method

- Time Complexity: O(n)
- Space Complexity: O(1) for XOR method, O(n) for temp array method

## 4. String Length (Length/Length.c)

- Simple implementation to count characters until null terminator
- Time Complexity: O(n)

## 5. Duplicate Characters (Duplicate_string/duplicate_string.c)

Two implementations:

1. Using hash array (supports both upper and lowercase)
2. Using bitwise operations

- Time Complexity: O(n)
- Space Complexity: O(1)

## 6. Character Counting (Counting_VC/CaseChange.c)

Functions for:

- Counting vowels and consonants
- Counting words
- Custom string length function
  Time Complexity: O(n) for all operations

## 7. String Comparison (compare/compare.c)

Includes:

- String comparison function
- Palindrome check
- Time Complexity: O(n)

## 8. Case Change (ChangeCase/CaseChange.c)

Functions for:

- Converting to uppercase
- Converting to lowercase
- Time Complexity: O(n)

## 9. Permutation (permutation/permutation.c)

[Implementation pending]

## Usage Examples

### Anagram Check

```c
char str1[] = "decimal";
char str2[] = "medical";
if(Anagram(str1, str2)) {
    printf("Strings are anagram\n");
}
```

### String Reversal

```c
char str[] = "HelloWorld";
reverse(str);  // Using temp array method
reverse2(str); // Using XOR method
```

### Case Change

```c
char str[] = "Hello, World!";
UpperCase(str); // Converts to "HELLO, WORLD!"
LowerCase(str); // Converts to "hello, world!"
```

## Common Time Complexity

Most string operations in this collection run in O(n) time, where n is the length of the input string.

## Limitations

- Most implementations assume ASCII character set
- Case-sensitive operations unless specified
- Limited error handling
- Some implementations may not handle special characters

