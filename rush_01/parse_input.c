#include <stdio.h>
#include <stdlib.h>
#include "data_structures.h" 

// Function to parse the user input and fill SkyscraperPuzle structure
int parse_input(char *input_str, SkyscraperPuzzle *puzzle)
{
    int i;
    int j;
    int clues[16]; // Temporary array to store the parsed clues

    i = 0;
    // Parse the input string and extract the clues for each row and column
    while (i < 16)
    {
        clues[i] = input_str[i * 2] - '0'; // ATOI: the *2 is to skip the whitespace and the '0' is == to 48 i guess
        i++;
    }
    // Initialize the puzzle board and set the clues for each row and column
    i = 0;
    while (i < 4)
    {
        j = 0;
        while (j < 4)
        {
            puzzle->board.cells[i][j] = 0; // Initialize board with 0's
            j++;
        }

        // Set the clues for each row
        j = 0;
        while (j < 4)
        {
            puzzle->rows[i].clues[j] = clues[i * 4 + j];
            j++;
        }
        // Set the clues for each column
        j = 0;
        while (j < 4)
        {
            puzzle->columns[i].clues[j] = clues[16 + i + j * 4];
            j++;
        }
        i++;
    }
    return (1); // Parsing done
}