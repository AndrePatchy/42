#ifndef DATA_STRUCTURES_H
#define DATA_STRUCTURES_H
// Structure to represent the puzzle board
typedef struct 
{
    int size; // 4 for 4x4 puzzle
    int **cells; // 2D array to sotre the heights of boxes
} Puzzleboard; 

// Structure to store the clues for each row and column
typedef struct
{
    int *clues; // Array to store the clues
} Clues;

// Structure 
typedef struct
{
    Puzzleboard board;
    Clues rows[4];
    Clues columns[4];
} SkyscraperPuzzle;
#endif // DATA_STRUCTURES_H