#include <stdlib.h>
#include <math.h>

int check_even(const int *values)
{
  int i;
  int e;
  int o;
  
  e = 0;
  o = 0;
  i = 0;
  while (i < 3)
  {
    values[i] % 2 == 0 ? e++ : o++;
    i++;
  }
  return (e > o ? 1 : 0);
}

int find_outlier(const int *values, size_t count)
{
  int i;
  int is_even;
  
  is_even = check_even(values); 
  i = 0;
  while (i < count)
  {
    if (is_even && abs(values[i]) % 2 == 1)
    {
      return (values[i]);
    }
    if (!is_even && abs(values[i]) % 2 == 0)
    {
      return (values[i]);
    }
    i++;
  }
}