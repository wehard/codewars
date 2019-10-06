int persistence(int n) {
  int c;
  int rem;

  c = 0;
  rem = 0;
  if (n < 10)
    return (c);
  while (1)
  {
    c++;
    rem = 1;
    while(n > 0)
    {
      rem *= n % 10;
      n /= 10;
    }
    if (rem < 10)
    {
      return (c);
    }
    else
    {
      n = rem;
    }
  }
  return (c);
}