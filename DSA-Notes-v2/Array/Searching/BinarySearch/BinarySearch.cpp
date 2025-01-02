/**
 * Binary Search is a searching algorithm that searches for an element in a sorted array.
 * It compares the target value to the middle element of the array. If they are not equal,
 * the half in which the target cannot
 * lie is eliminated and the search continues on the remaining half, again taking the middle element to compare to the target value,
 * and repeating this until the target value is found.
 * If the search ends with the remaining half being empty, the target is not in the array.
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
int BinarySearch(const Array *arr, int key);
int BinarySearchRecursive(const Array *arr, int low, int high, int key);

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

  int index = BinarySearch(&arr, key);

  int key2 = 5;
  int index2 = BinarySearchRecursive(&arr, 0, arr.length - 1, key2);

  resultDisplay(index, key);
  resultDisplay(index2, key2);

  return 0;
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

// Search for a key in the array using binary search
int BinarySearch(const Array *arr, int key)
{
  int low, high, mid;
  low = 0;
  high = arr->length - 1;

  while (low < high)
  {
    mid = low + (high - low) / 2;
    if (key == arr->A[mid])
      return mid;
    else if (key < arr->A[mid])
      high = mid - 1;
    else
      low = mid + 1;
  }

  return -1;
}

// Search for a key in the array using binary search recursively
int BinarySearchRecursive(const Array *arr, int low, int high, int key)
{
  int mid;

  if (low <= high)
  {
    mid = low + (high - low) / 2;
    if (key == arr->A[mid])
      return mid;
    else if (key < arr->A[mid])
      return BinarySearchRecursive(arr, low, mid - 1, key);
    else
      return BinarySearchRecursive(arr, mid + 1, high, key);
  }

  return -1;
}
