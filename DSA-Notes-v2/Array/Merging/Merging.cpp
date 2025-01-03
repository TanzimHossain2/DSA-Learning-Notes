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

Array *Merge(Array *arr1, Array *arr2);

int main()
{
  // Initialize the array
  Array arr1;
  arr1.size = 10;
  arr1.length = 5;
  arr1.A = new int[arr1.size]{2, 5, 8, 12, 16};

  Array arr2;
  arr2.size = 10;
  arr2.length = 5;
  arr2.A = new int[arr2.size]{3, 6, 9, 12, 15};

  Array *arr3 = Merge(&arr1, &arr2);

  Display(*arr3);

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

Array *Merge(Array *arr1, Array *arr2)
{
  int i = 0, j = 0, k = 0;

  Array *arr3 = (Array *)malloc(sizeof(Array));
  arr3->size = arr1->length + arr2->length;
  arr3->length = 0;
  arr3->A = (int *)malloc(arr3->size * sizeof(int));

  while (i < arr1->length && j < arr2->length)
  {
    if (arr1->A[i] < arr2->A[j])
    {
      arr3->A[k++] = arr1->A[i++];
    }
    else
    {
      arr3->A[k++] = arr2->A[j++];
    }
  }

  for (; i < arr1->length; i++)
  {
    arr3->A[k++] = arr1->A[i];
  }

  for (; j < arr2->length; j++)
  {
    arr3->A[k++] = arr2->A[j];
  }

  arr3->length = k;

  return arr3;
}

// Free the allocated memory for the array
void FreeArray(Array *arr)
{
  delete[] arr->A;
  arr->A = nullptr;
  arr->size = 0;
  arr->length = 0;
}