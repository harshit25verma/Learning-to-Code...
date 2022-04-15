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
    while ( h > 8 || h < 1);
    //Now we try to make the blocks code
    int i;
    int s=h;
    for ( i = 1 ; i <= h ; i++ && s--)
    {
        for (int d = 1; d < s ; d++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("  ");
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}