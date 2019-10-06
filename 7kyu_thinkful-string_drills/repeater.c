#include <stdlib.h>

char* repeater(const char* strin, int n) {
  
  char *ret;
  int i;
  int j;
  int len;
  
  len = strlen(strin);
  
  ret = (char*)malloc(sizeof(char) * (len * n) + 1);
  
  i = 0;
  while (i < n)
  {
    j = 0;
    while (j < len)
    {
      ret[i * len + j] = strin[j];
      j++;
    }
    i++;
  }
  ret[n * len] = '\0';
  return (ret);
}