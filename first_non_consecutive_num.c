//  Find the first element of an array that is not consecutive.

// If a non consecutive number is found then return true and set 
// the passed in pointer to the number found.

#include <stdbool.h>

bool firstNonConsecutive(const int arr[], const int length, int *first)
{
  int i = 0;
  while (i < length - 1)
  {
    if (arr[i + 1] - 1 != arr[i])
    {
      first = (int *) arr + i + 1;
      return true;
    }
    i++;
  }

  return false;
}
