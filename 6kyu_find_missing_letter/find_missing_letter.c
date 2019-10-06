char findMissingLetter(char array[], int arrayLength)
{
  int i;
  
  i = 1;
  while (i < arrayLength)
  {
    if (array[i] - array[i - 1] != 1)
      return (array[i] - 1);
    i++;
  }
  return ' ';
}