# String Reversal

This folder provides two methods to reverse a string:

1. Using a temporary array to swap characters.
2. Using an in-place XOR swap technique.

## Complexity

- Time: O(n)
- Space: O(n) using a temporary storage for one method; O(1) for the XOR approach

## Usage Example

```c
char str[] = "HelloWorld";
reverse(str);  // Reversal using a temporary array
reverse2(str); // Reversal using XOR swap
```

