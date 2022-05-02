#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);

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
        for(int i = 0, text[i] != 0 ; i++)
        {
            if(isalpha(alpha[h]))
            {
            h++;
            }
        }
        return h;
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