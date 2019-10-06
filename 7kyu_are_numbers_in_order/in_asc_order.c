#include <stddef.h>
#include <stdbool.h>

bool in_asc_order(const int *arr, size_t arr_size) {
  int i;
  
  i = 1;
  while (i < arr_size)
  {
    if (arr[i] < arr[i - 1])
      return (false);
    i++;
  }
  return (true);
}