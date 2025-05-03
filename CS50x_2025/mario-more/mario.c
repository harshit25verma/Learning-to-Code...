#include <stdio.h>
#include <cs50.h>

void print_spaces(int spaces, int height, int rows);
void print_bricks(int bricks, int rows);

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while(height<1);

    int rows;
    for (rows = 1; rows <= height; rows++)
    {

        print_spaces(rows, height, rows);
        print_bricks(rows, bricks);

        printf(" ");

        printf("\n");
    }
}






void print_spaces(int spaces, int height, int rows)
{
    for (int spaces = 0; spaces < height - rows; spaces++)
    {
        printf(" ");
    }
}

void print_bricks(int rows, int bricks)
{
    for(int bricks = 0; bricks < rows; bricks++)
    {
        printf("#");
    }
}
