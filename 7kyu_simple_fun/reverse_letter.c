int count_alpha(const char *str)
{
  int c;
  int i;
  
  c = 0;
  i = 0;
  while (str[i] != '\0')
  {
    if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
    {
      c++;
    }
    i++;
  }
  return (c);
}

char *reverse_letter(const char *str)
{
    char *rev;
    int i;
    int j;
    
    int a;
    
    a = count_alpha(str);
    rev = (char*)malloc(sizeof(char) * a + 1);
    
    i = 0;
    j = 0;
    rev[a--] = '\0';
    while (str[i] != '\0' && a >= 0)
    {
      if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
      {
        rev[a--] = str[i];
      }
      i++;
    }
    return (rev); //coding and coding..
}