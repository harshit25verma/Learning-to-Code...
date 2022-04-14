#include <cs50.h>
#include <stdio.h>

int main(void)
{
    while(height <= 8 && height >= 1)
    {
      int height = get_int("Height: ");
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

