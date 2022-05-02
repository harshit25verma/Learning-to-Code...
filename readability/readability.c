#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>

int count_letters(string text);
//int count_words(string text);

int main(void)
{
    string text = get_string("Text: ");
    int a ;
    for (a = 0 ; text[a] != 0 ; a++ )
    {
    int letters = count_letters(text);
    //int words = count_words(letters);
    a++;
    }
    printf("Number %i \n" , letters);
}


int count_letters(string text)
{
        int l = 0;
        while(isalpha(text[l]))
        {
         l++;
        }
        return l;
}

//while (x != 0)
//
    //    {
        //int l = 0;
//        while(isalpha(text[l]))
//        {
//         l++;
//        }
//        return l;
//
//
//
//int count_words(string text)
        //int w = 0;
//        if(isspace(text[w]))
//        {
    //     w++;
//        }
//        return y;
//       x++;
//
//
//
//
//
//
   // }