# Valid String Check

## Problem Statement

Determine if a given string contains only valid alphanumeric characters (A-Z, a-z, 0-9).

Example:

- "HelloWorld123" is valid
- "Hello@World" is not valid
- "Testing123" is valid
- "Test#123" is not valid

## Approach

We use ASCII value comparison to validate each character:

1. Check if character is uppercase (65-90)
2. Check if character is lowercase (97-122)
3. Check if character is numeric (48-57)

### Pseudocode

```plaintext
Function validString(str):
    For each character c in str:
        If not (c is in range A-Z
               OR c is in range a-z
               OR c is in range 0-9):
            Return False
    Return True
```

## Time Complexity Analysis

- **Iteration through string:** O(n)
- **Character checking:** O(1)
- **Overall Complexity:** O(n)

## Usage Example

```c
char str[] = "HelloWorld123";
if(validString(str)) {
    printf("Valid string\n");
} else {
    printf("Invalid string\n");
}
```

## Limitations

- Only accepts alphanumeric characters
- No support for spaces or punctuation
- ASCII-based validation only

