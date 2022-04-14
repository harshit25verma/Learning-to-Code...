#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int height = get_int("Height: ");
  int space = 0;
  while(space > 7)
  {
  printf("#");
  space++;
  }
  if(height <= 8 && height >= 1)
  {
   printf("  ");
  }
  if(height <= 8 && height >= 1)
  {
   printf("#\n");
  }
}