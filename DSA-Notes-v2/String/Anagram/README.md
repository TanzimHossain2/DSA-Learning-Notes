# Anagram

## Problem Statement

Two strings are anagrams if they contain the same characters in the same frequency but possibly in a different order.

Example:

- "listen" and "silent" are anagrams.
- "decimal" and "medical" are anagrams.
- "apple" and "papel" are anagrams.
- "hello" and "world" are not anagrams.

## Approach

We use a **hashing technique** with an integer array of size 26 (for lowercase English letters) to track character frequencies.

1. **Create a frequency table**

   - Iterate through the first string and increment the count for each character in an array `H[26]`.
   - Iterate through the second string and decrement the count.

2. **Check for imbalance**
   - If any value in the array is nonzero after processing both strings, the words are not anagrams.

### **Pseudocode**

```plaintext
Function Anagram(word1, word2):
    Create an array H of size 26 initialized to 0
    For each character in word1:
        Increment H[char - 'a']

    For each character in word2:
        Decrement H[char - 'a']
        If H[char - 'a'] < 0, return False

    For each value in H:
        If value is not 0, return False

    Return True
```

## **Time Complexity Analysis**

- **Building frequency table:** O(N)
- **Checking the second string:** O(N)
- **Final array check:** O(26) ≈ O(1)
- **Overall Complexity:** **O(N)** (where N is the length of the string)

## **Alternative Approach (Sorting)**

1. Sort both strings (O(N log N)).
2. Compare if they are equal.

```c
int compare(const void *a, const void *b) {
    return *(char*)a - *(char*)b;
}

int AnagramSort(char word1[], char word2[]) {
    if(strlen(word1) != strlen(word2)) return 0;

    qsort(word1, strlen(word1), sizeof(char), compare);
    qsort(word2, strlen(word2), sizeof(char), compare);

    return strcmp(word1, word2) == 0;
}
```

**Time Complexity:** O(N log N) (due to sorting)

## **Conclusion**

- **Hashing Approach:** O(N) (Faster, but uses extra space)
- **Sorting Approach:** O(N log N) (Slower but simpler)

The hashing approach is preferable for efficiency when dealing with large inputs.

