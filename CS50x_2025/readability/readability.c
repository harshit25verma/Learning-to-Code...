#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

string User_Input();
int NumberOfWords(string text_input);
int NumberOfLetters(string text_input);
int NumberOfSentences(string text_input);

int n = 0;

int main (void)
{
    string text;
    text = User_Input();

    while (text[n] != '\0')
    {
    NumberOfWords(text);
    NumberOfLetters(text);
    NumberOfSentences(text);
    n++;
    }

    //Check how many word and letter

        //Check how many Letters are present in the first 100 words
        //Count words until 100 words
        //if(word_count = 100)
        //{

        //}
        //else
        //{
        //    break;
        //}
        //Check How many Sentences are present in the first 100 words

    //Calculate via the Coleman-Liau index

    //Print the answer

}

//Get Text prompt from the User
string User_Input()
{
    do
    {
        string text = get_string("Text: ");     //get prompt from the User
        n++;
    }
    while (isblank(text_input[n]) || isdigit(text_input[n]) || isspace(text_input[n]));
    return text;
}


//Check how many word
int NumberOfWords(string text)
{
    int word_count = 0;
    while(isspace(text[n]))
    {
        word_count++;
    }
    printf("%i",word_count);
    return word_count;
}

//Check how many letters
int NumberOfLetters(string text)
{
    int letter_count = 0;
    while(isalnum(text[n]))
    {
        letter_count++;
    }
    printf("%i",letter_count);
    return letter_count;
}

//Check how many sentences
int NumberOfSentences(string text)
{
    int sentence_count = 0;
    while(ispunct(text[n]))
    {
        sentence_count++;
    }
    printf("%i",sentence_count);
    return sentence_count;
}
