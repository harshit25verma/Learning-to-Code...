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
    string text = get_string("Text: "); //Input of Text from the user

    float letters = count_letters(text); //Function that counts letters in the text
    float words = count_words(text); //Function that counts words(spaces+1) in the text
    float sentences = count_senteces(text); //Function that counts '!' '.' '?' in the text

    float L = letters / words * 100; //Average of Letters per 100 words
    float S = sentences / words * 100; //Average of Sentences per 100 words
    float index = (0.0588 * L) - (0.296 * S) - 15.8; //Coleman-Liau index formula

    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", (int) round(index));
    }
}



int count_letters(string text) //int function count_letters with input of a string text
{
    int h = 0;
    int s = 0;
    while (text[h] != '\0') //Check of the the at the no. h array is null value
    {
        if (isalpha(text[h])) //Check of the the at the no. h array is alphabet
        {
            s++; // Value actually needed
        }
        h++; //Increasing the value of array no.
    }
    return s;
}

int count_words(string text) //int function count_words with input of a string text
{
    int l = 0;
    int m = 0;
    while (text[l] != '\0') //Check of the the at the no. h array is null value
    {
        if (isspace(text[l])) //Check of the the at the no. h array is space
        {
            m++; // Value actually needed
        }
        l++; //Increasing the value of array no.
    }
    return m + 1;
}

int count_senteces(string text) //int function count_sentences with input of a string text
{
    int b = 0;
    int c = 0;
    while (text[b] != '\0') //Check of the the at the no. h array is null value
    {
        if (text[b] == '!' || text[b] == '.' || text[b] == '?') //Check of the the at the no. h array is !/./?
        {
            c++; // Value actually needed
        }
        b++; //Increasing the value of array no.
    }
    return c;
}
