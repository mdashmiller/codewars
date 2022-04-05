// Write a function which converts the input string to uppercase.

#include <ctype.h>

char *makeUpperCase(char *string)
{
  int i = 0;
  while (string[i])
  {
    string[i] = toupper(string[i]);
    i++;
  }

  return string;
}
