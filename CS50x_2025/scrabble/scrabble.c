#include <stdio.h>
#include <cs50.h>

int main (void)
{
    string player_one = get_string("Player 1: ");
    string player_two = get_string("Player 2: ");

    int n = 0;
    while (player_one[n] != '\0')
    {
        n++;
    }
    printf("%i\n", n);
}
