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
  for(i=1 ; i <= h ; i++)
  {
    for(int d = 1; d < h ; )
    {
      printf(".");
    }
      for(int j = 1; j <= i; j++)
      {
     printf("_");
      }
    printf("\n");
  }
}