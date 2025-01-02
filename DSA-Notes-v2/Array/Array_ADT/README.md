# Array Abstract Data Type (ADT)

## What is an ADT?

An Abstract Data Type (ADT) is a high-level description of how data is organized and the operations that can be performed on it. It provides a logical interface without exposing implementation details.

### Why Are ADTs Important?

1. **Abstraction**: ADTs hide the underlying implementation details, allowing developers to focus on logic and problem-solving.
2. **Reusability**: They provide reusable components for various applications.
3. **Modularity**: ADTs separate data structure definitions from their implementations, making the codebase modular.

### Use Cases of ADTs

- Data organization and storage (e.g., arrays, linked lists).
- Problem-solving tools in algorithms (e.g., stacks for expression evaluation, queues for task scheduling).
- Foundation for complex structures like hash tables, graphs, and trees.

---

## Array ADT

### Introduction to Arrays

An array is a collection of elements stored in contiguous memory locations. Each element can be accessed using an index.

#### Key Characteristics:

- Fixed size (defined during declaration).
- Random access capability (access any element in constant time using its index).

---

### Operations on Array ADT

#### 1. **Display**

Displays all elements in the array sequentially.

**Process:**

- Traverse the array from the first to the last index.
- Print each element.

**Time Complexity:** O(n) where n is the number of elements.

---

#### 2. **Append**

Adds a new element to the end of the array.

**Process:**

1. Check if the array has space.
   - If not, return an error or resize (if dynamic resizing is supported).
2. Place the new value at the position `length`.
3. Increment the `length`.

**Pseudocode:**

```
function Append(array, value):
    if array.length >= array.size:
        print("Error: Array is full")
        return
    array.A[array.length] = value
    array.length = array.length + 1
```

**Time Complexity:** O(1)

---

#### 3. **Insert**

Inserts a value at a specific index in the array.

**Process:**

1. Validate the index (ensure it is within bounds).
2. Check if the array has space.
   - If not, return an error or resize.
3. Shift elements to the right from the target index to create space.
4. Place the new value at the target index.
5. Increment the `length`.

**Pseudocode:**

```
function Insert(array, index, value):
    if index < 0 or index > array.length:
        print("Error: Invalid index")
        return
    if array.length >= array.size:
        print("Error: Array is full")
        return
    for i = array.length down to index + 1:
        array.A[i] = array.A[i - 1]
    array.A[index] = value
    array.length = array.length + 1
```

**Time Complexity:** O(n) (due to shifting elements).

---

#### 4. **Delete**

Removes an element at a specific index from the array.

**Process:**

1. Validate the index (ensure it is within bounds).
2. Retrieve the value to be deleted.
3. Shift elements to the left from the target index.
4. Decrement the `length`.

**Pseudocode:**

```
function Delete(array, index):
    if index < 0 or index >= array.length:
        print("Error: Invalid index")
        return
    deletedValue = array.A[index]
    for i = index to array.length - 2:
        array.A[i] = array.A[i + 1]
    array.length = array.length - 1
    return deletedValue
```

**Time Complexity:** O(n) (due to shifting elements).

---

#### 5. **Search**

Finds the index of an element in the array.

**Process:**

- Perform a linear search by iterating through the array until the element is found.

**Pseudocode:**

```
function Search(array, value):
    for i = 0 to array.length - 1:
        if array.A[i] == value:
            return i
    return -1
```

**Time Complexity:** O(n)

---

### Summary of Time Complexities

| Operation | Time Complexity |
| --------- | --------------- |
| Display   | O(n)            |
| Append    | O(1)            |
| Insert    | O(n)            |
| Delete    | O(n)            |
| Search    | O(n)            |

### Advantages of Arrays

- Simple and easy to use.
- Efficient for random access.

### Disadvantages of Arrays

- Fixed-size (inflexible in static implementations).
- Insertion and deletion operations are costly.

