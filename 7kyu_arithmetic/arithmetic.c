double arithmetic(double a, double b, char* operator) {
  if (strcmp(operator, "add") == 0)
    return (a + b);
  else if (strcmp(operator, "subtract") == 0)
    return (a - b);
  else if (strcmp(operator, "multiply") == 0)
    return (a * b);
  else if (strcmp(operator, "divide") == 0)
    return (a / b);
  else return (0);
}