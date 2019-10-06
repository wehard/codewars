#include <stddef.h>

int positive_sum(const int *values, size_t count)
{
  int sum;
  int i;
  
  i = 0;
  sum = 0;
  while (i < count)
  {
    if (values[i] >= 0)
    {
      sum += values[i];
    }
    i++;
  }
  return (sum);
}