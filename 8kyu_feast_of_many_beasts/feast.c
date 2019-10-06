#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool feast(const char* beast, const char* dish) {
    int last1;
    int last2;
    
    last1 = 0;
    while (beast[last1] != '\0')
      last1++;
    last2 = 0;
    while (dish[last2] != '\0')
      last2++;
    return ((beast[0] == dish[0]) && (beast[last1-1] == dish[last2-1]));
}