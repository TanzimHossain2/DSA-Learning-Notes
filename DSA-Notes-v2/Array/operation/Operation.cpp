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
int Get(Array arr, int index);
void Set(Array *arr, int index, int x);
int Max(const Array &arr);
int Min(const Array &arr);
int Sum(const Array &arr);
float Avg(const Array &arr);

int main()
{
  // Initialize the array
  Array arr;
  arr.size = 10;
  arr.length = 5;
  arr.A = new int[arr.size]{1, 2, 3, 4, 5};

  std::cout << "Initial Array:" << std::endl;
  Display(arr);

  // Get the element at the given index
  std::cout << "Element at index 2: " << Get(arr, 2) << std::endl;

  // Set the element at the given index
  Set(&arr, 2, 10);
  std::cout << "Array after setting element at index 2 to 10:" << std::endl;
  Display(arr);

  // Max element in the array
  std::cout << "Max element in the array: " << Max(arr) << std::endl;

  // Min element in the array
  std::cout << "Min element in the array: " << Min(arr) << std::endl;

  // Sum of all elements in the array
  std::cout << "Sum of all elements in the array: " << Sum(arr) << std::endl;

  // Average of all elements in the array
  std::cout << "Average of all elements in the array: " << Avg(arr) << std::endl;

  // Free the allocated memory for the array
  FreeArray(&arr);

  return 0;
}

// Get the element at the given index
int Get(Array arr, int index)
{
  if (index >= 0 && index < arr.length)
  {
    return arr.A[index];
  }
  return -1;
}

// Set the element at the given index
void Set(Array *arr, int index, int x)
{
  if (index >= 0 && index < arr->length)
  {
    arr->A[index] = x;
  }
}

// Max element in the array
int Max(const Array &arr)
{
  int max = arr.A[0];
  for (int i = 1; i < arr.length; i++)
  {
    if (arr.A[i] > max)
    {
      max = arr.A[i];
    }
  }
  return max;
}

// Min element in the array
int Min(const Array &arr)
{
  int min = arr.A[0];
  for (int i = 1; i < arr.length; i++)
  {
    if (arr.A[i] < min)
    {
      min = arr.A[i];
    }
  }
  return min;
}

// Sum of all elements in the array
int Sum(const Array &arr)
{
  int sum = 0;
  for (int i = 0; i < arr.length; i++)
  {
    sum += arr.A[i];
  }
  return sum;
}

// Average of all elements in the array
float Avg(const Array &arr)
{
  float result = (float)Sum(arr) / arr.length;
  return result;
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

// Free the allocated memory for the array
void FreeArray(Array *arr)
{
  delete[] arr->A;
  arr->A = nullptr;
  arr->size = 0;
  arr->length = 0;
}