#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>

int count_letters(string text);

int main(void)
{
    string text = get_string("Text: ");
    int letters = count_letters(text);
    printf("Number %i\n" , letters);
}

int






int count_letters(string text)
{
    int i = 0;
    while (text[i] != '\0')
    {
        i++;
    }
    return i;
}