#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int count_letters(string text);
//int count_words(string text);

int main(void)
{
    string text = get_string("Text: ");
    int letters = count_letters(text);
    //int words = count_words(letters);
    printf("Number %i \n" , letters);
}



int count_letters(string text)
{
  int h = 0;
  int s = h;
    while(text[h] != '\0')
        {
        if(isspace(text[h]) || text[h] == ',' || text[h] == '.')
         {
           s++;
         }
        h++;
        }
    return h - s;
}

int count_words(string text)
{
    int w = 0;
    int t ;
    while(text[w] != 0)
    {
        for(t = w; isspace(text[w]); t=0 || t<2)
        {
            t++;
        }
       w++;
    }
}