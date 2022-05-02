#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);

int main(void)
{
    string text = get_string("Text: ");
    int letters = count_letters(text);
    int words = count_words(text);
    printf("Number %i %i\n" , letters);
}

int count_words(string text)
{
    int w = 0;
    while (text[w] != '\0' , ' ', '.', ',') //
    {
        w++;
    }
    return w;
}




int count_letters(string text)
{
    int l = 0;
    while (text[l] != '\0')
    {
        l++;
    }
    return l;
}