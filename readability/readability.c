#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>

int count_letters(string text);
//int count_words(string text);

int main(void)
{
    string text = get_string("Text: ");
    int letters = count_letters(text);
    //int words = count_words(letters);
    printf("Number %i \n" , letters);
}

if (isspace(text))
{
        printf("Your input is whitespace.\n");
    }
    else
    {
        printf("Your input is not whitespace.\n");
    }
}

int count_letters(string text)
{
    int a = 0;
    for (text[a] != '\0')
    {
        a++;
    }
    return a;
}

//for (x != 0)
    //{
        //int x = 0;
//       while(isalpha(text[x]))
//        {
//         x++;
//        }
//        return x;
//
//
        //int x = 0;
//       while(isalpha(text[x]))
//        {
//         x++;
//        }
//        return x;
//
//
//
//
//
//
   // }