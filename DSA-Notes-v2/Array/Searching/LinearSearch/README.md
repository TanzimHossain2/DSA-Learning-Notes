# Linear Search Algorithm

Linear search is a straightforward algorithm used to find a target value in an array. It sequentially compares each element with the target value until a match is found or the entire array has been checked.

---

## Key Features of Linear Search

1. **Simple to Implement**: Requires minimal logic and is easy to code.
2. **Unsorted Arrays**: Works on both sorted and unsorted arrays.
3. **Inefficient for Large Data**: Has a linear time complexity, making it slow for large datasets.
4. **Optimization Techniques**:
   - **Transposition**: Swap the found element with the one before it to speed up future searches.
   - **Move-to-Head**: Swap the found element with the first element to maximize efficiency for frequently accessed values.

---

## Algorithm Steps

1. Start from the first element of the array.
2. Compare the target value with the current element.
3. If a match is found, return the index.
4. If no match is found, move to the next element.
5. Continue until the end of the array.
6. If the target value is not found, return -1.

---

## Linear Search Operations

### 1. **Basic Linear Search**

Finds the target value by checking each element sequentially.

**Process:**

- Iterate through the array from start to end.
- Compare each element with the target value.
- Return the index of the first match or -1 if not found.

**Pseudocode:**

```
function LinearSearch(array, key):
    for i = 0 to array.length - 1:
        if array[i] == key:
            return i
    return -1
```

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

### 2. **Linear Search with Transposition**

Improves efficiency by moving the found element one position closer to the start of the array.

**Process:**

- Perform a basic linear search.
- If a match is found, swap the element with the one before it.
- Return the index of the found element.

**Pseudocode:**

```
function TranspositionLinearSearch(array, key):
    for i = 0 to array.length - 1:
        if array[i] == key:
            if i != 0:
                swap(array[i], array[i - 1])
            return i
    return -1
```

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

### 3. **Linear Search with Move-to-Head**

Further optimizes the search by moving the found element directly to the first position of the array.

**Process:**

- Perform a basic linear search.
- If a match is found, swap the element with the first element.
- Return the index of the found element.

**Pseudocode:**

```
function MoveToHeadLinearSearch(array, key):
    for i = 0 to array.length - 1:
        if array[i] == key:
            if i != 0:
                swap(array[i], array[0])
            return i
    return -1
```

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

## Use Cases

- Searching in small datasets.
- When arrays are unsorted.
- As a fallback search method when advanced structures (like hash tables or binary trees) are unavailable.

---

## Advantages

- Simple and easy to implement.
- Works on unsorted arrays.
- Requires no extra memory.

---

## Disadvantages

- Inefficient for large arrays.
- Cannot leverage sorted data for faster searching.

---

## Summary of Techniques

| Technique                 | Optimization                      | Time Complexity | Space Complexity |
|---------------------------|------------------------------------|-----------------|------------------|
| Basic Linear Search       | None                              | O(n)            | O(1)             |
| Transposition Linear Search | Moves element one step closer     | O(n)            | O(1)             |
| Move-to-Head Linear Search | Moves element to the first position | O(n)            | O(1)             |

