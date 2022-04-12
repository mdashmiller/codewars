// Given a string of digits, you should replace any digit below 5 
// with '0' and any digit 5 and above with '1'.

// Please place result in the memory pointed to by
// the buffer parameter. Buffer has enough memory to
// accommodate the answer as well as the null-terminating
// character.

void fakeBin (const char *digits, char *buffer)
{
  for (int i = 0; digits[i] != 0; i++)
  {
    *buffer++ = digits[i] >= '5' ? '1' : '0';
  }
  *buffer = 0;
}
