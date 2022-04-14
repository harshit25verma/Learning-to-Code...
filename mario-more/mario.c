#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int h;
  do
  {
     h = get_int("Height: ");
  }
  while(h>8 || h<1);
  for(int i = 0; i<8; )
  {
     printf("####\n");
  }
}