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
void Reverse(Array *arr);
void ReverseSwap(Array *arr);
void ShiftLeft(Array *arr);
void ShiftRight(Array *arr);
void RightRotate(Array *arr);
void LeftRotate(Array *arr);




int main()
{
  // Initialize the array
  Array arr;
  arr.size = 10;
  arr.length = 5;
  arr.A = new int[arr.size]{1, 2, 3, 4, 5};

  std::cout << "Initial Array:" << std::endl;
  Display(arr);

  // Reverse the array
  Reverse(&arr);

  std::cout << "Reversed Array:" << std::endl;
  Display(arr);

  // Reverse the array using swapping
  ReverseSwap(&arr);

  std::cout << "Reversed Array using swapping:" << std::endl;
  Display(arr);

  // Shift the elements of the array to the left
  ShiftLeft(&arr);

  std::cout << "Shifted left Array:" << std::endl;
  Display(arr);

  // Shift the elements of the array to the right
  ShiftRight(&arr);

  std::cout << "Shifted right Array:" << std::endl;
  Display(arr);

  // Right rotate the elements of the array
  RightRotate(&arr);

  std::cout << "Right rotated Array:" << std::endl;
  Display(arr);

  // Left rotate the elements of the array
  LeftRotate(&arr);

  std::cout << "Left rotated Array:" << std::endl;
  Display(arr);

  // Free the allocated memory for the array
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


// Reverse the elements of the array
void Reverse(Array *arr){
  int *B;
  B = (int *)malloc(arr->length * sizeof(int));

  for (int i = arr->length - 1, j = 0; i >= 0; i--, j++)
  {
    B[j] = arr->A[i];
  }

  for (int i = 0; i < arr->length; i++)
  {
    arr->A[i] = B[i];
  }

  free(B);

}


// Reverse the elements of the array using swapping
void ReverseSwap(Array *arr)
{
  for (int i = 0, j = arr->length - 1; i < j; i++, j--)
  {
    std::swap(arr->A[i], arr->A[j]);
  }
}


// Shift the elements of the array to the left
void ShiftLeft(Array *arr)
{
  for (int i = 0; i < arr->length - 1; i++)
  {
    arr->A[i] = arr->A[i + 1];
  }
  arr->A[arr->length - 1] = 0;
}

// Shift the elements of the array to the right
void ShiftRight(Array *arr)
{
  for (int i = arr->length - 1; i > 0; i--)
  {
    arr->A[i] = arr->A[i - 1];
  }
  arr->A[0] = 0;
}

// Right rotate the elements of the array
void RightRotate(Array *arr)
{
  int temp = arr->A[arr->length - 1];
  for (int i = arr->length - 1; i > 0; i--)
  {
    arr->A[i] = arr->A[i - 1];
  }
  arr->A[0] = temp;
}

// Left rotate the elements of the array
void LeftRotate(Array *arr)
{
  int temp = arr->A[0];
  for (int i = 0; i < arr->length - 1; i++)
  {
    arr->A[i] = arr->A[i + 1];
  }
  arr->A[arr->length - 1] = temp;
}


// Free the allocated memory for the array
void FreeArray(Array *arr)
{
  delete[] arr->A;
  arr->A = nullptr;
  arr->size = 0;
  arr->length = 0;
}