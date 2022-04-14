#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int h = get_int("Height: ");
  int s = h - 1;
  int n = 1;
  if(h <= 8 && h >= 1)
  {
    while(s < 8)
    {
    printf(" ");
    }
    while(n < 8 )
    {
    printf("#\n");
    }
    s--;
    n++;
  }
}