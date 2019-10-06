#include <stddef.h>

unsigned binary_array_to_numbers(const unsigned *bits, size_t count)
{
  int d;
  int cb;
  unsigned i;
  
  i = 0;
  d = count - 1;
  cb = 0;
  while (d >= 0)
  {
    i |= bits[d] << cb;
    d--;
    cb++;
  }
  return i;
}