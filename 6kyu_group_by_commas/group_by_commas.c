char *strrev(char *str)
{
  char *rev;
  int len;
  
  len = strlen(str);
  rev = (char*)malloc(sizeof(char) * len + 1);
  rev[len--] = '\0';
  while (*str != '\0')
  {
    rev[len--] = *str;
    str++;
  }
  return (rev);
}

char* group_by_commas(int n) {

  char *str;
  int i;
  int d;
  
  str = (char*)malloc(sizeof(char) * 20);
  
  i = 0;
  if (n == 0)
  {
    str[i++] = '0';
    str[i] = '\0';
    return (str);
  }
  
  d = 0;
  while (n != 0)
  {
    if (d > 0 && (d % 3 == 0))
      str[i++] = ',';
    int rem = n % 10;
    str[i++] = rem + '0';
    n = n / 10;
    d++;
  }
  
  str[i] = '\0';
  
  return strrev(str);
}