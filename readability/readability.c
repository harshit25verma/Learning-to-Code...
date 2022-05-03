#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
//int count_senteces(string text);

int main(void)
{
    string text = get_string("Text: ");
    int letters = count_letters(text);
    int words = count_words(text); //- letters;
    //int sentences = count_senteces(text);
    printf("Letters %i\n Words %i\n " , letters , words);
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
  int d = 0;
    while(text[l] != '\0')
        {
        if(isspace(text[l]) || text[l] == ',' || text[l] == '.')
         {
           m++;
         }
        //  else if(text[l] == ',' || text[l] == '.')
        //  {
        //      d++;
        //  }
         l++;
         }
        // int w;
       return m;//w = l - d ;
}

// int count_senteces(string text)
// {
//   int b = 0;
//   int c = 0;
//   while(text[b] != '\0')

//     if(text[b] == '!' || text[b] == '.' || text[b] == '?')
//        {
//           c++;
//        }
//      b++;
//        return c;//w = l - d ;
// }