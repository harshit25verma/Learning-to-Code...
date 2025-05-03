#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while(height<1);

    int rows;
    for (rows = 0; rows<height; rows++)
    {
        int spaces;
        for (spaces = 0; spaces < height; spaces++)
        {
            printf(" ");
        }
        printf("#");
        printf("\n");
    }
}
