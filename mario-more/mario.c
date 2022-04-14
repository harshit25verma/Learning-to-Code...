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
  int n;
  for( i=h-n ;  )
  {
      for(int j = 0; j < h; j++)
      {
     printf("_");
      }
    printf("\n");
  }
}