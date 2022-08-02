#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    //if (int score1 >> int score2)
    //printf ("Player 1 wins!\n");
    //if (int score1 << int score2)
    //printf ("Player 2 wins!\n");
    //else if (int score1 == int score2)
    //printf ("Tie!\n");
}

int compute_score(string word)
{
    // TODO: Compute and return score for string

      int s = 0;
      int w = 0;
      int a = 36;
      int n = 0;
      while ( (word[w]) != '\0' || isalpha(word[w]) )
      {
      for ( (word[w]) = '\a'; (word[w]) == (POINTS[n]); a++)
      {

      n++;

      }
      int s = int (words[w]) + int s;
      w++;
      }
      Return s;
      printf ("Score = %i", (int s));
      // if array is a, then is equal to point array 0, if array is b, then is equal to point array 1 and so on
      //
      //If array value of word is 36, then int value equals array value of place 0 of point

      // Return int value i.e addition of all array no.s assigned ot the word
      //

}












