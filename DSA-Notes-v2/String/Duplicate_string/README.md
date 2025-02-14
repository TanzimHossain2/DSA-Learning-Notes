# Duplicate Characters

## Problem Statement

Find and print all duplicate characters in a given string.

Example:

- Input: "hello world"
- Output:
  - 'l' appears 3 times
  - 'o' appears 2 times

## Approach

### 1. Hash Array Method

We use a hash array of size 52 to handle both uppercase and lowercase letters:

- Index 0-25: lowercase letters
- Index 26-51: uppercase letters

### 2. Bitwise Method

Uses bit manipulation to track characters:

- Each bit represents presence of a character
- Bitwise AND to check duplicates
- Bitwise OR to mark presence

### Pseudocode (Hash Method)

```plaintext
Function duplicate_string(str):
    Create array H[52] initialized to 0
    For each char in str:
        If char is lowercase:
            Increment H[char - 'a']
        If char is uppercase:
            Increment H[char - 'A' + 26]

    For i from 0 to 51:
        If H[i] > 1:
            Print character and its count
```

## Time Complexity Analysis

- Hash Method: O(n)
  - Space: O(1) - fixed size array
- Bitwise Method: O(n)
  - Space: O(1) - single long int

## Usage Example

```c
char str[] = "hello world";
duplicate_string(str);        // Using hash method
duplicate_string_bitwise(str); // Using bitwise method
```

## Limitations

- Hash method: Limited to alphabetic characters
- Bitwise method: Limited by integer size (typically 32/64 bits)

