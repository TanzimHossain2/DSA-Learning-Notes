# Array Operations - Reverse, Shift, and Rotate

This document explores various operations that can be performed on arrays. Arrays are a fundamental data structure in programming, providing a way to store a fixed-size sequence of elements of the same type. The operations discussed below include reversing, shifting, rotating, and managing memory for arrays.

## Operations Covered

1. [Display](#1-display)
2. [Reverse](#2-reverse)
3. [Reverse using Swapping](#3-reverse-using-swapping)
4. [Shift Left](#4-shift-left)
5. [Shift Right](#5-shift-right)
6. [Right Rotate](#6-right-rotate)
7. [Left Rotate](#7-left-rotate)
8. [Memory Management](#8-memory-management)

---

### 1. Display

The `Display` operation prints all the elements of the array.

#### Theory:

- The array is traversed from the first to the last element.
- Each element is printed sequentially.

#### Pseudocode:

```plaintext
function Display(array):
    for i from 0 to length of array - 1:
        print array[i]
```

---

### 2. Reverse

The `Reverse` operation reverses the order of elements in the array using an auxiliary array.

#### Theory:

- A new array is created to hold the reversed elements.
- Elements are copied from the original array to the new array in reverse order.
- The original array elements are replaced with the reversed elements.

#### Pseudocode:

```plaintext
function Reverse(array):
    B = new array of size array.length
    for i from array.length - 1 to 0:
        B[array.length - 1 - i] = array[i]
    for i from 0 to array.length - 1:
        array[i] = B[i]
```

---

### 3. Reverse using Swapping

The `ReverseSwap` operation reverses the array in place by swapping elements.

#### Theory:

- Two pointers are used: one at the beginning and the other at the end of the array.
- The elements at these pointers are swapped, and the pointers are moved closer to each other until they meet.

#### Pseudocode:

```plaintext
function ReverseSwap(array):
    i = 0
    j = array.length - 1
    while i < j:
        swap(array[i], array[j])
        i = i + 1
        j = j - 1
```

---

### 4. Shift Left

The `ShiftLeft` operation shifts all elements of the array one position to the left. The first element is lost, and a `0` is inserted at the end.

#### Theory:

- Each element is shifted one position to the left.
- The last position is filled with `0`.

#### Pseudocode:

```plaintext
function ShiftLeft(array):
    for i from 0 to array.length - 2:
        array[i] = array[i + 1]
    array[array.length - 1] = 0
```

---

### 5. Shift Right

The `ShiftRight` operation shifts all elements of the array one position to the right. The last element is lost, and a `0` is inserted at the beginning.

#### Theory:

- Each element is shifted one position to the right.
- The first position is filled with `0`.

#### Pseudocode:

```plaintext
function ShiftRight(array):
    for i from array.length - 1 to 1:
        array[i] = array[i - 1]
    array[0] = 0
```

---

### 6. Right Rotate

The `RightRotate` operation rotates the array to the right by one position. The last element moves to the first position.

#### Theory:

- The last element is stored in a temporary variable.
- All elements are shifted one position to the right.
- The stored element is placed in the first position.

#### Pseudocode:

```plaintext
function RightRotate(array):
    temp = array[array.length - 1]
    for i from array.length - 1 to 1:
        array[i] = array[i - 1]
    array[0] = temp
```

---

### 7. Left Rotate

The `LeftRotate` operation rotates the array to the left by one position. The first element moves to the last position.

#### Theory:

- The first element is stored in a temporary variable.
- All elements are shifted one position to the left.
- The stored element is placed in the last position.

#### Pseudocode:

```plaintext
function LeftRotate(array):
    temp = array[0]
    for i from 0 to array.length - 2:
        array[i] = array[i + 1]
    array[array.length - 1] = temp
```

---

### 8. Memory Management

The `FreeArray` operation deallocates the memory allocated for the array.

#### Theory:

- The dynamically allocated memory for the array elements is deleted.
- The array size and length are reset to `0`.

#### Pseudocode:

```plaintext
function FreeArray(array):
    delete array.A
    array.A = null
    array.size = 0
    array.length = 0
```

---

## Example Output

### Initial Array:

```
Elements are: 1 2 3 4 5
```

### Reversed Array:

```
Elements are: 5 4 3 2 1
```

### Reversed Array using Swapping:

```
Elements are: 1 2 3 4 5
```

### Shifted Left Array:

```
Elements are: 2 3 4 5 0
```

### Shifted Right Array:

```
Elements are: 0 2 3 4 5
```

### Right Rotated Array:

```
Elements are: 5 0 2 3 4
```

### Left Rotated Array:

```
Elements are: 0 2 3 4 5
```

---

## Time Complexity of Operations

| Operation                  | Time Complexity |
| -------------------------- | --------------- |
| **Display**                | O(n)            |
| **Reverse**                | O(n)            |
| **Reverse using Swapping** | O(n)            |
| **Shift Left**             | O(n)            |
| **Shift Right**            | O(n)            |
| **Right Rotate**           | O(n)            |
| **Left Rotate**            | O(n)            |
| **Memory Management**      | O(1)            |

Here, `n` represents the number of elements in the array. Most operations that involve shifting or rotating elements require a linear scan through the array, resulting in O(n) time complexity. The memory management operation, however, only requires a constant-time operation to deallocate the array's memory, resulting in O(1) time complexity.
