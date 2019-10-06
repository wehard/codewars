#include <stdbool.h>

bool is_black(char c, char r)
{
  if (c == 'A' || c == 'C' || c == 'E' || c == 'G')
  {
    if (r == '1' || r == '3' || r == '5' || r == '7')
      return (true);
    else
      return (false);
  }
  else 
  {
    if (r == '1' || r == '3' || r == '5' || r == '7')
      return (false);
    else
      return (true);
  }
}

bool chess_board_cell_color(const char* cell1, const char *cell2)
{ 
  return (is_black(cell1[0], cell1[1]) == is_black(cell2[0], cell2[1]));
}