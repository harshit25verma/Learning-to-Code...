#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int h = get_int("Height: ");
  int s = height - 1;
  int n = 1;
  while(s > 7)
  {
  printf("#");
  s++;
  }
  if(h <= 8 && h >= 1)
  {
   printf("  ");
  }
  if(h <= 8 && h >= 1)
  {
   printf("#\n");
  }
  s--;
  n++;
}