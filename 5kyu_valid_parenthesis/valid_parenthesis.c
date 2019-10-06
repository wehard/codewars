#include <stdbool.h>

bool validParentheses(const char* strin) {
  int opened;
  int i;
  
  opened = 0;
  i = 0;
  while(strin[i] != '\0')
  {
    if(strin[i] == '(')
      opened++;
    if(strin[i] == ')')
    {
      if (opened == 0)
        return (false);
      opened--;
    }
    i++;
  }
  return (opened == 0 ? true : false);
}