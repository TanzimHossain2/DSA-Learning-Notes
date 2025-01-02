/**
 * Linear Search
 *  - Linear search is a simple search algorithm that searches for a key in an array.
 * - It compares each element of the array with the key until a match is found.
 * - If the key is found, the index of the key is returned; otherwise, -1 is returned.
 * - The time complexity of linear search is O(n).
 * - Linear search is not efficient for large arrays.
 * - Linear search can be used for unsorted arrays.
 * - Linear search can be optimized by using transposition or move-to-head techniques.
 * - Transposition: Swap the element with the previous element when the key is found.
 * - Move-to-head: Swap the element with the first element when the key is found.
 * - The average time complexity of linear search with transposition is O(n) and with move-to-head is O(n).
 *
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

// Define a structure for the array
typedef struct
{
  int *A;     // Pointer to the array elements
  int size;   // Maximum size of the array
  int length; // Current number of elements in the array
} Array;

// Function prototypes
void resultDisplay(int index, int key);
void Display(const Array &arr);
void swap(int *x, int *y);
int LinearSearch(const Array &arr, int key);
int TranspositionLinearSearch(Array *arr, int key);
int MoveToHeadLinearSearch(Array *arr, int key);

int main(int argc, char *argv[])
{
  // Initialize the array
  Array arr;
  arr.size = 10;
  arr.length = 5;
  arr.A = new int[arr.size]{1, 2, 3, 4, 5};

  std::cout << "Initial Array:" << std::endl;
  Display(arr);

  // Search for a key in the array
  int key = 3;

  int index = LinearSearch(arr, key);

  int key2 = 5;
  int index2 = TranspositionLinearSearch(&arr, key2);

  int key3 = 1;
  int index3 = MoveToHeadLinearSearch(&arr, key3);

  resultDisplay(index, key);
  resultDisplay(index2, key2);
  resultDisplay(index3, key3);
}

void resultDisplay(int index, int key)
{
  if (index != -1)
  {
    std::cout << "Key " << key << " found at index " << index << std::endl;
  }
  else
  {
    std::cout << "Key " << key << " not found." << std::endl;
  }
}

// Display the elements of the array
void Display(const Array &arr)
{
  std::cout << "Elements are: ";
  for (int i = 0; i < arr.length; i++)
  {
    std::cout << arr.A[i] << " ";
  }
  std::cout << std::endl;
}

// Swap two integer values
void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

// Search for a key in the array using linear search
int LinearSearch(const Array &arr, int key)
{
  for (int i = 0; i < arr.length; i++)
  {
    if (arr.A[i] == key)
    {
      return i;
    }
  }
  return -1;
}

// linear search with transposition
int TranspositionLinearSearch(Array *arr, int key)
{
  for (int i = 0; i < arr->length; i++)
  {
    if (arr->A[i] == key)
    {
      // Swap the element with the previous element
      if (i != 0)
      {
        swap(&arr->A[i], &arr->A[i - 1]);
      }
      return i;
    }
  }
  return -1;
}

// linear search with move to head
int MoveToHeadLinearSearch(Array *arr, int key)
{
  for (int i = 0; i < arr->length; i++)
  {
    if (arr->A[i] == key)
    {
      // Swap the element with the first element
      if (i != 0)
      {
        swap(&arr->A[i], &arr->A[0]);
      }
      return i;
    }
  }
  return -1;
}
