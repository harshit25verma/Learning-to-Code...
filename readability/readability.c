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
      int h = 0;
     int s = h;
            while(text[h] != '\0')
            {
                if(isspace(text[h]) || text[h] == '\44' || text[h] == '\46')
                      {
                         s++;
                      }
                    h++;
            }
        return h - s;
  }




//while (x != 0)
        //int l = 0;
//        for (text[h]!= '\0')
    //    {
        // each character = declaration;
//        while(isalpha(check for each character)
//        {
//         l++;
//        }
//        each character++;
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