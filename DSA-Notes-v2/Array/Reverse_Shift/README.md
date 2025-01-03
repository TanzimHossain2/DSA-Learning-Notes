# Array Operations - Reverse and Shift and Rotate

This document covers various operations that can be performed on arrays. Arrays are a fundamental data structure in programming, used to store a fixed-size sequence of elements of the same type. Below is an explanation of the operations implemented, along with pseudocode for each.

## Operations Covered

1. **Display**
2. **Reverse**
3. **Reverse using Swapping**
4. **Shift Left**
5. **Shift Right**
6. **Right Rotate**
7. **Left Rotate**
8. **Memory Management**

## 1. Display
The `Display` operation prints all the elements of the array.

### Theory
- Traverses the array from the first to the last element.
- Prints each element sequentially.

### Pseudocode
```
function Display(array):
    for i from 0 to length of array:
        print array[i]
```

## 2. Reverse
The `Reverse` operation reverses the order of elements in the array using an auxiliary array.

### Theory
- Create a new array to hold the reversed elements.
- Copy elements from the original array into the new array in reverse order.
- Replace the original array elements with the reversed elements.

### Pseudocode
```
function Reverse(array):
    B = new array of size array.length
    for i from array.length - 1 to 0:
        B[array.length - 1 - i] = array[i]
    for i from 0 to array.length - 1:
        array[i] = B[i]
```

## 3. Reverse using Swapping
The `ReverseSwap` operation reverses the array by swapping elements in place.

### Theory
- Use two pointers: one starting at the beginning and the other at the end.
- Swap the elements at these pointers and move the pointers closer to each other until they meet.

### Pseudocode
```
function ReverseSwap(array):
    i = 0
    j = array.length - 1
    while i < j:
        swap(array[i], array[j])
        i = i + 1
        j = j - 1
```

## 4. Shift Left
The `ShiftLeft` operation shifts all elements of the array one position to the left. The first element is lost, and a `0` is inserted at the end.

### Theory
- Shift each element one position to the left.
- Fill the last position with `0`.

### Pseudocode
```
function ShiftLeft(array):
    for i from 0 to array.length - 2:
        array[i] = array[i + 1]
    array[array.length - 1] = 0
```

## 5. Shift Right
The `ShiftRight` operation shifts all elements of the array one position to the right. The last element is lost, and a `0` is inserted at the beginning.

### Theory
- Shift each element one position to the right.
- Fill the first position with `0`.

### Pseudocode
```
function ShiftRight(array):
    for i from array.length - 1 to 1:
        array[i] = array[i - 1]
    array[0] = 0
```

## 6. Right Rotate
The `RightRotate` operation rotates the array to the right by one position. The last element moves to the first position.

### Theory
- Store the last element in a temporary variable.
- Shift all elements one position to the right.
- Place the stored element in the first position.

### Pseudocode
```
function RightRotate(array):
    temp = array[array.length - 1]
    for i from array.length - 1 to 1:
        array[i] = array[i - 1]
    array[0] = temp
```

## 7. Left Rotate
The `LeftRotate` operation rotates the array to the left by one position. The first element moves to the last position.

### Theory
- Store the first element in a temporary variable.
- Shift all elements one position to the left.
- Place the stored element in the last position.

### Pseudocode
```
function LeftRotate(array):
    temp = array[0]
    for i from 0 to array.length - 2:
        array[i] = array[i + 1]
    array[array.length - 1] = temp
```

## 8. Memory Management
The `FreeArray` operation deallocates the memory allocated for the array.

### Theory
- Deletes the dynamically allocated memory for the array elements.
- Resets the array size and length to `0`.

### Pseudocode
```
function FreeArray(array):
    delete array.A
    array.A = null
    array.size = 0
    array.length = 0
```

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
