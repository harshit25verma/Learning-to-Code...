#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_senteces(string text);

int main(void)
{
    string text = get_string("Text: ");
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_senteces(text);

    float L = letters/words*100;
    float S = sentences/words*100;
    float index = (0.0588 * L) - (0.296 * S) - 15.8;
    if(index >= 16)
    {
      printf("Grade 16+\n");
    }
    else if(index < 1)
    {
      printf("Before Grade 1\n");
    }
    else
    {
    printf("Grade %i\n" ,(int) round(index));
    }
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
        int a;
    return a = h - s;
}

int count_words(string text)
{
  int l = 0;
  int m = 0;
    while(text[l] != '\0')
        {
        if(isspace(text[l]))
         {
           m++;
         }
         l++;
         }
       return m + 1;
}

int count_senteces(string text)
{
  int b = 0;
  int c = 0;
  while(text[b] != '\0')
        {
    if(text[b] == '!' || text[b] == '.' || text[b] == '?')
       {
          c++;
       }
     b++;
        }
       return c;
}
