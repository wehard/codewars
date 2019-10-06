int is_vowel(char c)
{
  if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    return (1);
  return (0);
}

int solve(const char* strin) {
  int cur_sum;
  int max_sum;
  int i;
  
  cur_sum = 0;
  max_sum = 0;
  i = 0;
  while (strin[i] != '\0')
  {
    if (!is_vowel(strin[i]))
    {
      cur_sum += strin[i] - 'a' + 1;
    }
    else 
    {
      if (cur_sum > max_sum)
      {
        max_sum = cur_sum;
      }
      cur_sum = 0;
    }
    i++;
  }
  return (max_sum);
}