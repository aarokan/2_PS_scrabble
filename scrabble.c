#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Prompt the user for two words
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Compute the score of each word
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // Print the winner
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
{
    // compute and return score for word
    int wordLength = strlen(word);

    int wordScore = 0;

    for (int i = 0; i < wordLength; i++)
    {
        // convert ascii to alphabet order number (deduct 65)
        int alphabetNumber = toupper(word[i]) - 65;
        
        // if it's not a character execlude it from the score
        if (alphabetNumber >= 0 && alphabetNumber < 26) 
        {
            // add letter point to the score
            wordScore += POINTS[alphabetNumber];
        }
    }
    return wordScore;
}