#include <cs50.h>
#include <stdio.h>

int main(void)
{
    while(true)
    {
    int height = get_int("Height: ");
    if(height <= 8 && height >= 1)
    {
        printf("##\n");
    }
    else if(height >= 8 && height <= 1);
    {
        get_int("Height: ");
    }
    }
}

