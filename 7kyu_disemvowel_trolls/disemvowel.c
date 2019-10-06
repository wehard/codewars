#include <stdlib.h>

int is_vowel(char c)
{
  if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    return (1);
  if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    return (1);
  return (0);
}

char *disemvowel(const char *str)
{
  int i;
  int j;
  char *new;
  char c;
  
  new = (char*)malloc(sizeof(char) * strlen(str) + 1);
  
  i = 0;
  j = 0;
  while (str[i] != '\0')
  {
    if (!is_vowel(str[i]))
    {
      new[j] = str[i];
      j++;
      i++;
    }
    else
    {
      i++;
    }
  }
  new[j] = '\0';
  return (new);
}