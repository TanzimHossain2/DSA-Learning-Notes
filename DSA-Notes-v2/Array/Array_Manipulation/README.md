## Array Manipulation Program

This program demonstrates various operations on an array, including inserting an element into a sorted array, checking if the array is sorted, and rearranging the array to separate negative and positive elements. The program is implemented in C++ and uses a structure to manage the array.

---

## Table of Contents

- [Array Structure](#1-array-structure)
- [Display Function](#2-display-function)
- [Insert Element in a Sorted Array](#3-insert-element-in-a-sorted-array)
- [Check if Array is Sorted](#4-check-if-array-is-sorted)
- [Rearrange Array](#5-rearrange-array)
- [Free Array Memory](#6-free-array-memory)
- [Expected Output](#expected-output)
- [Key Observations](#key-observations)

---

## Features and Functions

### 1. **Array Structure**

The array is managed using a structure (`Array`) that contains:

- `A`: A pointer to the array elements.
- `size`: The maximum size of the array.
- `length`: The current number of elements in the array.

---

### 2. **Display Function**

**`void Display(const Array &arr)`**

- **Purpose**: Prints all the elements of the array.
- **Time Complexity**: O(n), where `n` is the number of elements in the array.

**Pseudocode**:

```
FUNCTION Display(arr)
    FOR i FROM 0 TO arr.length - 1
        PRINT arr.A[i]
    END FOR
END FUNCTION
```

---

### 3. **Insert Element in a Sorted Array**

**`void insertElement(Array *arr, int value)`**

- **Purpose**: Inserts a new element into a sorted array while maintaining its sorted order.
- **Logic**: Shift elements greater than the new value one position to the right, and insert the new value at the correct position.
- **Time Complexity**: O(n) in the worst case (if the insertion is at the beginning).

**Pseudocode**:

```
FUNCTION insertElement(arr, value)
    IF arr.length == arr.size THEN
        PRINT "Array is full"
        RETURN
    END IF

    SET i = arr.length - 1
    WHILE i >= 0 AND arr.A[i] > value DO
        arr.A[i + 1] = arr.A[i]
        i = i - 1
    END WHILE

    arr.A[i + 1] = value
    arr.length = arr.length + 1
END FUNCTION
```

---

### 4. **Check if Array is Sorted**

**`bool isSorted(const Array &arr)`**

- **Purpose**: Verifies whether the array elements are sorted in non-decreasing order.
- **Logic**: Iterate through the array and compare each element with the next. If any element is greater than the next, the array is not sorted.
- **Time Complexity**: O(n), where `n` is the number of elements in the array.

**Pseudocode**:

```
FUNCTION isSorted(arr)
    FOR i FROM 0 TO arr.length - 2
        IF arr.A[i] > arr.A[i + 1] THEN
            PRINT "Array is not sorted"
            RETURN false
        END IF
    END FOR

    PRINT "Array is sorted"
    RETURN true
END FUNCTION
```

---

### 5. **Rearrange Array**

**`void Rearrange(Array *arr)`**

- **Purpose**: Separates negative and positive numbers in the array, moving all negative elements to the left and positive elements to the right.
- **Logic**: Use two pointers (`i` and `j`), one starting from the beginning (`i`) and the other from the end (`j`). Swap elements if they are out of place.
- **Time Complexity**: O(n), where `n` is the number of elements in the array.

**Pseudocode**:

```
FUNCTION Rearrange(arr)
    SET i = 0, j = arr.length - 1

    WHILE i < j DO
        WHILE arr.A[i] < 0 DO
            i = i + 1
        END WHILE

        WHILE arr.A[j] >= 0 DO
            j = j - 1
        END WHILE

        IF i < j THEN
            SWAP arr.A[i], arr.A[j]
        END IF
    END WHILE
END FUNCTION
```

---

### 6. **Free Array Memory**

**`void FreeArray(Array *arr)`**

- **Purpose**: Frees the dynamically allocated memory of the array and resets its attributes.
- **Time Complexity**: O(1).

**Pseudocode**:

```
FUNCTION FreeArray(arr)
    DELETE arr.A
    arr.A = NULL
    arr.size = 0
    arr.length = 0
END FUNCTION
```

---

## Expected Output

Below is an example of the program's output for a sample input.

### Input:

- Initial array: `{1, 3, 4, 5}`
- Insert `2`
- Check if the array is sorted.
- Rearrange the array: `{ -1, 3, -4, 5, -6, 7, -8, 9 }`.

### Output:

```
Initial Array:
Elements are: 1 3 4 5

Array after inserting 2:
Elements are: 1 2 3 4 5

Array is sorted

Array before rearranging:
Elements are: -1 3 -4 5 -6 7 -8 9

Array after rearranging:
Elements are: -1 -4 -6 -8 5 7 3 9
```

---

## Key Observations

1. **Array Insertion**:

   - The insertion function assumes the array is sorted initially.
   - It efficiently shifts elements to maintain sorted order.

2. **Rearrangement**:

   - Negative numbers are moved to the left using a two-pointer approach.
   - No sorting occurs within the negative or positive segments.

3. **Sorting Check**:
   - The function verifies the sorted order in O(n) time.
   - Outputs a message indicating whether the array is sorted.

