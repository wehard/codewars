#include <stdbool.h>

bool scramble(const char *str1, const char *str2)
{
  int i;
  int chars[26] = {0};
  
  i = 0;
  while (str1[i] != '\0')
  {
    chars[str1[i] - 'a']++;
    i++;
  }

  i = 0;
  while(str2[i] != '\0')
  {
    chars[str2[i] - 'a']--;
    if (chars[str2[i] - 'a'] < 0)
    {
      return (false);
    }
    i++;
  }
  return (true);
}