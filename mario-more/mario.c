#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = get_int("Height: ");
    do
    {
        printf("##\n");
    }
    while(height <= 8 && height >= 1);
}

