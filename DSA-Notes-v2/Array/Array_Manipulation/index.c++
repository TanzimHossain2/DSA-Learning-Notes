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
void Display(const Array &arr);
void FreeArray(Array *arr);
void insertElement(Array *arr, int value);
bool isSorted(const Array &arr);
void Rearrange(Array *arr);

int main()
{
  // Initialize the array
  Array arr;
  arr.size = 10;
  arr.length = 4;
  arr.A = new int[arr.size]{1, 3, 4, 5};

  std::cout << "Initial Array:" << std::endl;
  Display(arr);

  insertElement(&arr, 2);
  std::cout << "Array after inserting 6:" << std::endl;
  Display(arr);

  // Check if the array is sorted
  isSorted(arr);

  // Rearrange the array
   arr.A = new int[arr.size]{-1, 3, -4, 5, -6, 7, -8, 9};
  std::cout << "Array before rearranging:" << std::endl;
  Display(arr);
  Rearrange(&arr);
  std::cout << "Array after rearranging:" << std::endl;
  Display(arr);
  

  return 0;
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

// Insert an element into the array
void insertElement(Array *arr, int value)
{

if (arr->length == arr->size)
  {
    std::cout << "Array is full" << std::endl;
    return;
  }

  int i = arr->length - 1;
  while ( i>0 && arr->A[i] > value)
  {
    arr->A[i + 1] = arr->A[i];
    i--;
  }

  arr->A[i + 1] = value;
  arr->length++;
}


// Check if the array is sorted
bool isSorted(const Array &arr)
{
  for (int i = 0; i < arr.length - 1; i++)
  {
    if (arr.A[i] > arr.A[i + 1])
    {
      std::cout << "Array is not sorted" << std::endl;
      return false;
      
    }
  }
  std::cout << "Array is sorted" << std::endl;
  return true;
}

// Rearrange the array so that all negative elements are on the left and positive elements are on the right
void Rearrange(Array *arr){
  int i, j;
  i = 0;
  j = arr->length - 1;

  while (i < j)
  {
    while (arr->A[i] < 0)
    {
      i++;
    }
    while (arr->A[j] >= 0)
    {
      j--;
    }
    if (i < j)
    {
      std::swap(arr->A[i], arr->A[j]);
    }
  }



}


// Free the allocated memory for the array
void FreeArray(Array *arr)
{
  delete[] arr->A;
  arr->A = nullptr;
  arr->size = 0;
  arr->length = 0;
}