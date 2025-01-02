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
void Append(Array *arr, int value);
void Insert(Array *arr, int index, int value);
void FreeArray(Array *arr);
int Delete(Array *arr, int index);

int main()
{
  // Initialize the array
  Array arr;
  arr.size = 10;
  arr.length = 5;
  arr.A = new int[arr.size]{1, 2, 3, 4, 5};

  std::cout << "Initial Array:" << std::endl;
  Display(arr);

  // Append values to the array
  Append(&arr, -2);
  Append(&arr, 10);

  std::cout << "After Append:" << std::endl;
  Display(arr);

  try
  {
    // Insert values into the array
    Insert(&arr, 3, 100);
    Insert(&arr, 6, 500);
    std::cout << "After Insert:" << std::endl;
    Display(arr);

    // Delete a value from the array
    int deletedValue = Delete(&arr, 3);
    std::cout << "Deleted Value: " << deletedValue << std::endl;
    std::cout << "After Delete:" << std::endl;
    Display(arr);
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }

  // Free the allocated memory
  FreeArray(&arr);
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

// Append a value to the end of the array
void Append(Array *arr, int value)
{
  if (arr->length < arr->size)
  {
    arr->A[arr->length++] = value;
  }
  else
  {
    std::cerr << "Array is full. Cannot append." << std::endl;
  }
}

// Insert a value at a specified index in the array
void Insert(Array *arr, int index, int value)
{
  if (index < 0 || index > arr->length)
  {
    throw std::invalid_argument("Index is invalid.");
  }

  if (arr->length >= arr->size)
  {
    throw std::overflow_error("Array is full. Cannot insert.");
  }

  // Shift elements to the right
  for (int i = arr->length; i > index; i--)
  {
    arr->A[i] = arr->A[i - 1];
  }
  arr->A[index] = value;
  arr->length++;
}

// Delete a value at a specified index in the array
int Delete(Array *arr, int index)
{
  if (index < 0 || index >= arr->length)
  {
    throw std::invalid_argument("Index is invalid.");
  }

  int deletedValue = arr->A[index];

  // Shift elements to the left
  for (int i = index; i < arr->length - 1; i++)
  {
    arr->A[i] = arr->A[i + 1];
  }

  arr->length--;
  return deletedValue;
}

// Free the allocated memory for the array
void FreeArray(Array *arr)
{
  delete[] arr->A;
  arr->A = nullptr;
  arr->size = 0;
  arr->length = 0;
}