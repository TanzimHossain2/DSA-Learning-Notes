# Types of Recursion in C

Recursion in programming is when a function calls itself to solve a problem in smaller steps. Here are the main types of recursion, explained with pseudocode.

## Table of Contents

1. [Tail Recursion](#1-tail-recursion)
2. [Head Recursion](#2-head-recursion)
3. [Tree Recursion](#3-tree-recursion)
4. [Indirect Recursion](#4-indirect-recursion)
5. [Nested Recursion](#5-nested-recursion)
6. [Summary Table](#6-summary-table)
7. [Visualization of Tree Recursion](#visualization-of-tree-recursion)

---

## 1. Tail Recursion

**Tail Recursion** happens when the recursive call is the last operation in the function. This type of recursion is memory-efficient because some compilers optimize it by converting the recursion to a loop internally.

### Pseudocode Example (Tail Recursion)

```c
void fun(int n) {
    if (n > 0) {
        printf("%d", n);
        fun(n - 1); // Tail Recursion: recursive call is the last operation
    }
}
```

### Complexity Of Tail Recursion

- **Time Complexity:** O(n) – Each call processes `n - 1` until `n = 0`.
- **Space Complexity:** O(n) – Requires space for each recursive call in the stack.

### Converting to a Loop (for Comparison)

```c
void fun(int n) {
    while (n > 0) {
        printf("%d", n);
        n--;
    }
}
```

In this form, **Space Complexity** becomes O(1) since no additional stack frames are created.

---

## 2. Head Recursion

In **Head Recursion**, the recursive call is the first operation in the function, and any processing occurs after returning from the recursive calls. This type requires more stack memory, as each call waits for subsequent calls to finish.

### Pseudocode Example (Head Recursion)

```c
void fun(int n) {
    if (n > 0) {
        fun(n - 1);  // Head Recursion: recursive call is the first operation
        printf("%d", n);
    }
}
```

### Complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(n) – Since each call is stored on the stack until the base case is reached.

---

## 3. Tree Recursion

In **Tree Recursion**, a function calls itself multiple times within each call, creating a tree-like branching of recursive calls. Tree recursion is common in algorithms that split problems into smaller subproblems, like the Fibonacci sequence.

### Pseudocode Example (Tree Recursion)

```c
void fun(int n) {
    if (n > 0) {
        printf("%d", n);
        fun(n - 1);  // First branch
        fun(n - 2);  // Second branch
    }
}
```

### Complexity Of Tree Recursion

- **Time Complexity:** O(2^n) – Due to the exponential growth in calls.
- **Space Complexity:** O(n) – Maximum call depth based on the maximum value of `n` in one call path.

---

## 4. Indirect Recursion

In **Indirect Recursion**, two or more functions call each other in a cycle. For example, function A calls function B, and function B calls function A, creating an indirect recursive pattern.

### Pseudocode Example (Indirect Recursion)

```c
void funA(int n) {
    if (n > 0) {
        printf("%d", n);
        funB(n - 1);  // Indirect recursion: calls funB instead of itself
    }
}

void funB(int n) {
    if (n > 1) {
        printf("%d", n);
        funA(n / 2);  // Calls funA, continuing the indirect recursion cycle
    }
}
```

### Complexity Of Indirect Recursion

- **Time Complexity:** Depends on the function sequence and number of calls.
- **Space Complexity:** O(n) – Stack space grows with the number of recursive calls.

---

## 5. Nested Recursion

In **Nested Recursion**, a function calls itself within its own arguments. This recursion type is rare and can lead to deep recursive calls, as each argument calculation requires further recursion.

### Pseudocode Example (Nested Recursion)

```c
int fun(int n) {
    if (n > 0) {
        return fun(fun(n - 1));  // Recursive call within the function's argument
    }
    return 0;
}
```

### Complexity Of Nested Recursion

- **Time Complexity:** Highly variable, often exponential depending on the depth.
- **Space Complexity:** O(n) – Due to the depth of recursive calls.

---

## 6. Summary Table

| Recursion Type         | Time Complexity | Space Complexity    | Note                          |
| ---------------------- | --------------- | ------------------- | ----------------------------- |
| **Tail Recursion**     | O(n)            | O(1) (if optimized) | Often convertible to loop     |
| **Head Recursion**     | O(n)            | O(n)                | Processes during return phase |
| **Indirect Recursion** | Varies          | Depends on calls    | Multiple functions involved   |
| **Nested Recursion**   | Exponential     | High                | Heavy memory usage            |
| **Tree Recursion**     | O(2^n)          | O(n)                | Exponential call growth       |

---

### Visualization of Tree Recursion

To understand Tree Recursion visually, you can use the [Visualgo.net Recursion Tool](https://visualgo.net/en/recursion). This interactive tool allows you to enter custom pseudocode or code and watch how the recursion unfolds with each call. For example, you can visualize how a tree structure forms as each recursive call branches into two or more further calls.

Here’s a simple example to try in Visualgo:

```js
void fun(int n) {
    if (n > 0) {
        console.log(n);
        fun(n - 1);
        fun(n - 2);
    }
}
```

In Visualgo, enter this code snippet (adapting it slightly if needed to fit their syntax) to see how `fun(n - 1)` and `fun(n - 2)` are recursively called, forming a tree structure where each call has two branches until `n` reaches 0. This visualization can help clarify the exponential growth in function calls with Tree Recursion.

---

