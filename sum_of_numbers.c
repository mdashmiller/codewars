int get_sum(int a, int b)
{
  int begin = a;
  int end = b;

  if (b < a)
  {
    begin = b;
    end = a;
  }

  int sum = 0;
  for (; begin <= end; begin++)
  {
    sum += begin;
  }

  return sum;
}