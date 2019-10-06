#include <stdbool.h>

bool IsIsogram(char *str) 
{
  int i;
  int j;
  int len;
  char c1, c2;
  
  len = strlen(str);
  i = 0;
  while (i < len)
  {
    c1 = str[i] > 96 ? str[i] - 32 : str[i];
    j = i + 1;
    while (j < len)
    {
      c2 = str[j] > 96 ? str[j] - 32 : str[j];
      if (c1 == c2)
        return (false);
      j++;
    }
    i++;
  }
  return (true);
}