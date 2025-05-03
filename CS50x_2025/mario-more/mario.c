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
    int spaces;

    for (rows = 1; rows <= height; rows++)
    {
        int bricks;

        print_spaces(rows, height, rows);
        print_bricks(rows);

        printf(" ");

        printf("\n");
    }
}






void print_spaces(int spaces, int height, int rows)
{
    for (spaces = 0; spaces < height - rows; spaces++)
    {
        printf(" ");
    }
}

void print_bricks(int bricks, int rows)
{
    for(bricks = 0; bricks < rows; bricks++)
    {
        printf("#");
    }
}
