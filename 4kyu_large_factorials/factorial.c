#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

const char* number_to_string(long number) {
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

long	ft_iterative_factorial(int nb)
{
	long result;

	if (nb < 0 || nb > 15)
		return (0);
	result = 1;
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

char	*factorial(int n) {
	// TODO: Compute the exact value of n! and return the result as a string
	char *str;
	str = number_to_string(ft_iterative_factorial(n));
	printf("%s", str);
	return (str);
}

int main(void)
{
	cr_assert_str_eq(factorial(1), "1");
	cr_assert_str_eq(factorial(5), "120");
	cr_assert_str_eq(factorial(9), "362880");
	cr_assert_str_eq(factorial(15), "1307674368000");
}