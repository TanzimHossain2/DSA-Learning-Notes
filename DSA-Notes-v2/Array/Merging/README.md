# Merge Arrays - C++ Example Explanation

This document explains the code provided, which demonstrates how to merge two sorted arrays into a third sorted array using dynamic memory allocation in C++. The code uses a custom data structure to represent the arrays and demonstrates memory management techniques.

### Theory and Process

The goal of this code is to merge two sorted arrays into a third array, preserving the order of elements. The merging process compares elements from both arrays and places the smaller element into the new array. This technique is typically used in merge sort algorithms.

The code involves several steps:

1. **Array Representation**: Arrays are represented using a structure called `Array`, which contains:

   - A pointer `A` to the array elements.
   - An integer `size` indicating the maximum size of the array.
   - An integer `length` indicating the current number of elements in the array.

2. **Memory Allocation**: Memory for arrays is dynamically allocated using `new` for `arr1` and `arr2`, and `malloc` for `arr3`. This approach ensures that the size of the arrays can be determined at runtime.

3. **Merging Process**:

   - The arrays `arr1` and `arr2` are merged into a third array `arr3` using two pointers (i and j) that traverse the arrays.
   - Elements are compared from both arrays, and the smaller element is placed into `arr3`.
   - If any elements remain in either array after one array is fully traversed, they are added directly to `arr3`.

4. **Display and Memory Management**:
   - The `Display` function prints the merged array.
   - The `FreeArray` function deallocates the memory used for the arrays.

---

### Step-by-Step Breakdown of Code

1. **Array Structure Definition**

   - A custom structure `Array` is defined to hold the array data (`A`), its `size`, and its current `length`.

2. **Merging Function**

   - `Merge` function accepts pointers to two arrays (`arr1` and `arr2`).
   - Memory for `arr3` is allocated dynamically, based on the combined length of both input arrays.
   - The function uses two pointers `i` and `j` to traverse `arr1` and `arr2`, and a third pointer `k` to place the merged elements in `arr3`.

3. **Displaying the Array**

   - `Display` function prints the elements of the array `arr3` after merging.

4. **Memory Management**
   - The `FreeArray` function ensures that the memory allocated for the arrays is released, preventing memory leaks.

---

### Pseudocode

The pseudocode below explains the process in a simplified manner, focusing on the main logic of merging arrays and handling dynamic memory.

```plaintext
function Display(arr):
    for i from 0 to arr.length - 1:
        print arr.A[i]

function Merge(arr1, arr2):
    i = 0                // Pointer for arr1
    j = 0                // Pointer for arr2
    k = 0                // Pointer for arr3

    // Allocate memory for arr3
    arr3.size = arr1.length + arr2.length
    arr3.A = new array of size arr3.size
    arr3.length = 0

    // Merge arrays arr1 and arr2 into arr3
    while i < arr1.length and j < arr2.length:
        if arr1.A[i] < arr2.A[j]:
            arr3.A[k] = arr1.A[i]
            i = i + 1
        else:
            arr3.A[k] = arr2.A[j]
            j = j + 1
        k = k + 1

    // If there are remaining elements in arr1
    while i < arr1.length:
        arr3.A[k] = arr1.A[i]
        i = i + 1
        k = k + 1

    // If there are remaining elements in arr2
    while j < arr2.length:
        arr3.A[k] = arr2.A[j]
        j = j + 1
        k = k + 1

    arr3.length = k

    return arr3

function FreeArray(arr):
    delete arr.A
    arr.A = null
    arr.size = 0
    arr.length = 0
```

---

### Key Concepts

1. **Dynamic Memory Allocation**:

   - `new` and `malloc` are used to allocate memory dynamically for arrays based on runtime conditions. This is useful for working with arrays whose sizes are determined at runtime.

2. **Merging Sorted Arrays**:

   - The core logic of merging two sorted arrays is based on comparing the current elements of both arrays and inserting the smaller one into the result array. This ensures that the merged array remains sorted.

3. **Memory Management**:
   - The `FreeArray` function is used to free the dynamically allocated memory after use. This prevents memory leaks and ensures efficient memory utilization.

---

### Example Run

1. **Input Arrays**:

   Array 1: [2, 5, 8, 12, 16]  
   Array 2: [3, 6, 9, 12, 15]

2. **Merged Array** (after applying `Merge` function):

   Merged: [2, 3, 5, 6, 8, 9, 12, 12, 15, 16]

3. **Output**:

   ```
   Elements are: 2 3 5 6 8 9 12 12 15 16
   ```

---

### Time Complexity of the Merge Operation

- The merge process involves traversing both input arrays fully. Therefore, the time complexity of the `Merge` function is O(n + m), where:
  - `n` is the length of the first array (`arr1`).
  - `m` is the length of the second array (`arr2`).
- The `Display` function has a time complexity of O(n), where `n` is the length of the merged array.

- Memory allocation and deallocation (in `FreeArray`) are performed in constant time O(1).

---

