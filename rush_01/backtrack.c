#include "data_structures.h"
#include <stdbool.h>

//  Function to check if a number can be place in a specific cell
bool is_valid_move(SkyscraperPuzzle *puzzle, int row, int col, int num)
{
    // check if the number is already present in the same row or column
    int i;

    i = 0;
    while (i < puzzle->board.size)
    {
        if (puzzle->board.cells[row][i] == num || puzzle->board.cells[i][col] == num)
        {
            return false;
        }
        i++;
    }
    // Check if the number is visible from the top (for rows) or form left (for columns)
    int visible_from_top;
    int visible_from_left;

    visible_from_top = 1;
    visible_from_left = 1;

    // Check visibility from top (for rows)
    i = 0;
    while (i < row)
    {
        if (puzzle->board.cells[row][i] > num)
        {
            visible_from_left++;
        }
        i++;
    }

    // compare the visibility with the clues
    if (visible_from_top != puzzle->rows[row].clues[col] || visible_from_left != puzzle->columns[col].clues[row])
    {
        return false;
    }

    return true;
}

// Recursive backtracking puzzle to solve the puzzle
bool solve_puzzle_backtrack(SkyscraperPuzzle *puzzle)
{
    int size;
    int row;
    int col;
    int num;

    size = puzzle->board.size;
    row = 0;
    while (row < size)
    {
        col = 0;
        while (col < size)
        {
            if (puzzle->board.cells[row][col] == 0)
            {
                break;
            }
            col++;
        }
        if (puzzle->board.cells[row][col] == 0)
        {
            break;
        }
        row++;
    }
    // if no empty cell is found, the puzzle is solved
    if(row == size && col == size)
    {
        return true;
    }
    // try placing numbers from 1 to size in the empty cell
    num = 1;
    while (num <= size)
    {
        if (is_valid_move(puzzle, row, col, num))
        {
            // Place the number and proceed to the next cell
            puzzle->board.cells[row][col] = num;

            // Recursive call to solve the rest of the puzzle
            if(solve_puzzle_backtrack(puzzle))
            {
                return true;
            }
            // If placing the number doesn't lead to solution, backtrack and try the next number
            puzzle->board.cells[row][col] = 0;
        }
        num++;
    }
    // If no number can be place in the current cell, the puzzle is unsolvable 
    return false;
}