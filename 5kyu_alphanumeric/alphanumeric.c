#include <stdbool.h>

bool is_alpha(char c)
{
  if (c >= 'a' && c <= 'z')
	return (true);
  if (c >= 'A' && c <= 'Z')
	return (true);
  return (false);
}

bool is_number(char c)
{
  if (c >= '0' && c <= '9')
	return (true);
  return (false);
}

bool alphanumeric(const char* strin) {
  bool found_alpha;
  bool found_number;
  
  if (!strin || !*strin)
	return (false);

  while (*strin)
  {
	if (!found_alpha)
	  found_alpha = is_alpha(*strin);
	if (!found_number)
	  found_number = is_number(*strin);
	
	if (!is_alpha(*strin) && !is_number(*strin))
	  return (false);
	
	strin++;
  }
  return (found_alpha | found_number);
}