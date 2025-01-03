# Array Operations in C++

## Table of Contents

1. [Introduction](#introduction)
2. [Structure of the Array](#structure-of-the-array)
3. [Operations](#operations)
   - [Get an Element](#get-an-element)
   - [Set an Element](#set-an-element)
   - [Find the Maximum Element](#find-the-maximum-element)
   - [Find the Minimum Element](#find-the-minimum-element)
   - [Calculate the Sum of Elements](#calculate-the-sum-of-elements)
   - [Calculate the Average of Elements](#calculate-the-average-of-elements)
   - [Display the Elements](#display-the-elements)
   - [Free the Array Memory](#free-the-array-memory)
4. [Example Usage](#example-usage)
5. [Time Complexity Summary](#time-complexity-summary)

---

## Introduction

This note provides an overview of common array operations in C++ using a custom `Array` structure. The operations demonstrated include retrieving, modifying, and analyzing elements of an array. Each operation is explained in detail with the relevant pseudocode and time complexity.

---

## Structure of the Array

The `Array` structure defines an array with dynamic memory allocation:

```cpp
typedef struct {
  int *A;     // Pointer to the array elements
  int size;   // Maximum size of the array
  int length; // Current number of elements in the array
} Array;
```

### Key Components:

- `A`: Pointer to the array elements stored dynamically.
- `size`: Maximum capacity of the array.
- `length`: Current number of elements in the array.

---

## Operations

### 1. Get an Element

**Description:** Retrieves the element at a specific index.

**Pseudocode:**

```
FUNCTION Get(Array, index)
    IF index >= 0 AND index < Array.length THEN
        RETURN Array.A[index]
    ELSE
        RETURN -1
END FUNCTION
```

**Time Complexity:** O(1)

---

### 2. Set an Element

**Description:** Updates the element at a specific index with a new value.

**Pseudocode:**

```
FUNCTION Set(Array, index, value)
    IF index >= 0 AND index < Array.length THEN
        Array.A[index] = value
END FUNCTION
```

**Time Complexity:** O(1)

---

### 3. Find the Maximum Element

**Description:** Finds the maximum element in the array.

**Pseudocode:**

```
FUNCTION Max(Array)
    max = Array.A[0]
    FOR i FROM 1 TO Array.length - 1
        IF Array.A[i] > max THEN
            max = Array.A[i]
    END FOR
    RETURN max
END FUNCTION
```

**Time Complexity:** O(n)

---

### 4. Find the Minimum Element

**Description:** Finds the minimum element in the array.

**Pseudocode:**

```
FUNCTION Min(Array)
    min = Array.A[0]
    FOR i FROM 1 TO Array.length - 1
        IF Array.A[i] < min THEN
            min = Array.A[i]
    END FOR
    RETURN min
END FUNCTION
```

**Time Complexity:** O(n)

---

### 5. Calculate the Sum of Elements

**Description:** Computes the sum of all elements in the array.

**Pseudocode:**

```
FUNCTION Sum(Array)
    sum = 0
    FOR i FROM 0 TO Array.length - 1
        sum = sum + Array.A[i]
    END FOR
    RETURN sum
END FUNCTION
```

**Time Complexity:** O(n)

---

### 6. Calculate the Average of Elements

**Description:** Computes the average of all elements in the array.

**Pseudocode:**

```
FUNCTION Avg(Array)
    sum = Sum(Array)
    RETURN sum / Array.length
END FUNCTION
```

**Time Complexity:** O(n)

---

### 7. Display the Elements

**Description:** Prints all the elements in the array.

**Pseudocode:**

```
FUNCTION Display(Array)
    FOR i FROM 0 TO Array.length - 1
        PRINT Array.A[i]
    END FOR
END FUNCTION
```

**Time Complexity:** O(n)

---

### 8. Free the Array Memory

**Description:** Deallocates the dynamically allocated memory for the array.

**Pseudocode:**

```
FUNCTION FreeArray(Array)
    DELETE Array.A
    Array.A = NULL
    Array.size = 0
    Array.length = 0
END FUNCTION
```

**Time Complexity:** O(1)

---

## Example Usage

```cpp
// Initialize the array
Array arr;
arr.size = 10;
arr.length = 5;
arr.A = new int[arr.size]{1, 2, 3, 4, 5};

// Perform operations
Display(arr);
std::cout << "Max: " << Max(arr) << std::endl;
std::cout << "Min: " << Min(arr) << std::endl;
std::cout << "Sum: " << Sum(arr) << std::endl;
std::cout << "Avg: " << Avg(arr) << std::endl;

// Free memory
FreeArray(&arr);
```

---

## Time Complexity Summary

| Operation                         | Time Complexity |
| --------------------------------- | --------------- |
| Get an Element                    | O(1)            |
| Set an Element                    | O(1)            |
| Find the Maximum Element          | O(n)            |
| Find the Minimum Element          | O(n)            |
| Calculate the Sum of Elements     | O(n)            |
| Calculate the Average of Elements | O(n)            |
| Display the Elements              | O(n)            |
| Free the Array Memory             | O(1)            |

---

