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
    char A = 'A';
    char B = 'B';
    char a = 'a';
    char b = 'b';
    printf("A = %i\n", A);
    printf("B = %i\n", B);
    printf("a = %i\n", a);
    printf("b = %i\n", b);
    printf("A - 65 = %i\n", A - 65);
    printf("B - 65 = %i\n", B - 65);
    printf("toupper(a) - 65 = %i\n", toupper(a) - 65);
    printf("toupper(b) - 65 = %i\n", toupper(b) - 65);
}

int compute_score(string word)
{
    // compute and return score for word
    int wordLength = strlen(word);
    printf("compute word length: %i", wordLength);
    printf("\n");

    for (int i = 0; i < wordLength; i++)
    {
        // convert ascii to alphabet number (deduct 65)
        int alphabetNumber = toupper(word[i]) - 65;
        printf("alphabetNumber: %i", alphabetNumber);
        printf("\n");   
    }
}