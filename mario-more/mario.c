#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int height = get_int("Height: ");
  while(height <= 8 && height >= 1)
  {
      if(height <= 8 && height >= 1)
      {
          printf("#");
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
}

