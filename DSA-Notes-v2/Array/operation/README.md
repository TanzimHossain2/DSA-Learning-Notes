# Array Operations

## Introduction
This note provides an overview of several essential array operations implemented in C++ using a custom `Array` structure. These operations include retrieving, modifying, and analyzing array elements. Each operation is explained with its purpose, functionality, and time complexity.

## Structure of the Array
The `Array` structure is defined as:

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

## Operations

### 1. Get an Element
**Description:** Retrieves the element at a specific index.

**Algorithm:**
1. Check if the index is valid (0 <= index < length).
2. If valid, return the element at the given index.
3. Otherwise, return -1.

**Pseudocode:**
```plaintext
Get(Array, index):
  if index >= 0 and index < Array.length:
    return Array.A[index]
  return -1
```

**Time Complexity:** O(1)

---

### 2. Set an Element
**Description:** Updates the element at a specific index with a new value.

**Algorithm:**
1. Check if the index is valid (0 <= index < length).
2. If valid, set the element at the given index to the new value.

**Pseudocode:**
```plaintext
Set(Array, index, value):
  if index >= 0 and index < Array.length:
    Array.A[index] = value
```

**Time Complexity:** O(1)

---

### 3. Find the Maximum Element
**Description:** Finds the maximum element in the array.

**Algorithm:**
1. Initialize `max` with the first element of the array.
2. Traverse the array and update `max` if a larger element is found.
3. Return `max` after traversing the entire array.

**Pseudocode:**
```plaintext
Max(Array):
  max = Array.A[0]
  for i from 1 to Array.length - 1:
    if Array.A[i] > max:
      max = Array.A[i]
  return max
```

**Time Complexity:** O(n)

---

### 4. Find the Minimum Element
**Description:** Finds the minimum element in the array.

**Algorithm:**
1. Initialize `min` with the first element of the array.
2. Traverse the array and update `min` if a smaller element is found.
3. Return `min` after traversing the entire array.

**Pseudocode:**
```plaintext
Min(Array):
  min = Array.A[0]
  for i from 1 to Array.length - 1:
    if Array.A[i] < min:
      min = Array.A[i]
  return min
```

**Time Complexity:** O(n)

---

### 5. Calculate the Sum of Elements
**Description:** Computes the sum of all elements in the array.

**Algorithm:**
1. Initialize `sum` to 0.
2. Traverse the array and add each element to `sum`.
3. Return `sum` after traversing the entire array.

**Pseudocode:**
```plaintext
Sum(Array):
  sum = 0
  for i from 0 to Array.length - 1:
    sum += Array.A[i]
  return sum
```

**Time Complexity:** O(n)

---

### 6. Calculate the Average of Elements
**Description:** Computes the average of all elements in the array.

**Algorithm:**
1. Calculate the sum of all elements using the `Sum` function.
2. Divide the sum by the number of elements (`length`).

**Pseudocode:**
```plaintext
Avg(Array):
  return Sum(Array) / Array.length
```

**Time Complexity:** O(n)

---

### 7. Display the Elements
**Description:** Prints all the elements in the array.

**Algorithm:**
1. Traverse the array and print each element.

**Pseudocode:**
```plaintext
Display(Array):
  for i from 0 to Array.length - 1:
    print(Array.A[i])
```

**Time Complexity:** O(n)

---

### 8. Free the Array Memory
**Description:** Deallocates the dynamically allocated memory for the array.

**Algorithm:**
1. Delete the array pointer.
2. Set the pointer to `nullptr`.
3. Reset `size` and `length` to 0.

**Pseudocode:**
```plaintext
FreeArray(Array):
  delete Array.A
  Array.A = nullptr
  Array.size = 0
  Array.length = 0
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
