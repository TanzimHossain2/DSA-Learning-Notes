# Binary Search Algorithm

Binary Search is an efficient searching algorithm used to find the position of a target element in a **sorted array**. By dividing the search interval in half repeatedly, it significantly reduces the number of comparisons required.

## Key Concepts:

1. **Requirements:**

   - Binary search works only on sorted arrays.
   - The search space is divided into halves during each iteration or recursive call.

2. **Steps:**

   - Calculate the middle index of the array.
   - Compare the target value with the middle element:
     - If the target matches the middle element, return its index.
     - If the target is smaller than the middle element, repeat the process on the left subarray.
     - If the target is larger than the middle element, repeat the process on the right subarray.
   - Continue until the search space is empty or the target is found.

3. **Why Binary Search?**

   - It is more efficient than linear search, especially for large datasets, as its time complexity is **O(log n)** compared to **O(n)** for linear search.

4. **Variants:**

   - **Iterative Binary Search**
   - **Recursive Binary Search**

---

## Binary Search (Iterative)

### Theory:

In the iterative approach:

- Start with two pointers, `low` and `high`, representing the start and end of the array.
- Compute the middle index using `(low + high) / 2`.
- Adjust the `low` or `high` pointer based on the comparison of the target value with the middle element.
- Repeat the process until the target is found or the pointers overlap.

### Pseudocode:

```
BINARY_SEARCH(Array, key):
    low ← 0
    high ← length(Array) - 1

    while low <= high do:
        mid ← (low + high) / 2

        if Array[mid] == key:
            return mid
        else if key < Array[mid]:
            high ← mid - 1
        else:
            low ← mid + 1

    return -1  // Key not found
```

### Time Complexity:

- **Best case:** O(1) (if the target is at the middle).
- **Worst/Average case:** O(log n).

---

## Binary Search (Recursive)

### Theory:

In the recursive approach:

- Start with the `low` and `high` pointers representing the current subarray.
- Calculate the middle index.
- Depending on the comparison:
  - Recur on the left subarray (update `high`) or the right subarray (update `low`).
- Base cases:
  - Return the middle index if the target is found.
  - Return -1 if the search space becomes empty.

### Pseudocode:

```
BINARY_SEARCH_RECURSIVE(Array, low, high, key):
    if low > high:
        return -1  // Key not found

    mid ← (low + high) / 2

    if Array[mid] == key:
        return mid
    else if key < Array[mid]:
        return BINARY_SEARCH_RECURSIVE(Array, low, mid - 1, key)
    else:
        return BINARY_SEARCH_RECURSIVE(Array, mid + 1, high, key)
```

### Time Complexity:

- Same as the iterative version: O(log n).
- Additional space complexity due to recursion: O(log n).

---

## Advantages:

- Fast search in sorted datasets.
- Reduces search space exponentially.

## Limitations:

- Only works with sorted arrays.
- Additional overhead is needed to maintain pointers or recursion stack.

---

## Optimization Notes:

- For large datasets, always ensure the array is sorted before applying binary search.
- Avoid integer overflow when calculating the middle index. Use `mid = low + (high - low) / 2` instead of `(low + high) / 2`.

