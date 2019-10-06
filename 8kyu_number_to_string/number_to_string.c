#include <stdlib.h>
#include <stdio.h>

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

const char* number_to_string(int number) {
  char *str;
  int neg; 
  int i;
  
  str = (char*)malloc(sizeof(char) * 25);
  i = 0;
  if (number == 0) 
  { 
    str[i++] = '0'; 
    str[i] = '\0'; 
    return str; 
  } 
  
  if (number < 0)
  {
    neg = 1;
    number *= -1;
  }
  
  while (number != 0)
  {
    str[i++] = (number % 10) + '0';
    number /= 10;
  }
  
  if (neg == 1)
  {
    str[i++] = '-';
  }
  
  str[i] = '\0';
  
  return (strrev(str));
}