#include <stdlib.h>

char *no_space(char *strin) {
    int i;
    int j;
    char *ret = (char*)malloc(sizeof(char) * strlen(strin) + 1);

    i = 0;
    j = 0;
    while (strin[i])
    {
      if (strin[i] != ' ')
      {
        ret[j] = strin[i];
        j++;
      }
      i++;
    }
    ret[j] = '\0';
    return (ret);
}