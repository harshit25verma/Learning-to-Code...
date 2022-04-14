#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //We need the self identifying loop
  int h;
  do
  {
     h = get_int("Height: ");
  }
  while(h>8 || h<1);
  //Now we try to make the blocks code
  int i;
  for(i=0 ; i < h ; i++)
  {
      for(int j = h-1; j < h && h>1 && h<8; h--)
      {
     printf("_");
      }
    printf("\n");
  }
}