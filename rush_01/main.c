#include "data_structures.h"
#include "backtrack.c"
#include "ft_putchar.c"
#include "parse_input.c"

int parse_input(char *input_str, SkyscraperPuzzle *puzzle);

bool solve_puzzle_backtrack(SkyscraperPuzzle *puzzle);

bool is_valid_move(SkyscraperPuzzle *puzzle, int row, int col, int num);

void print_solved_puzzle(SkyscraperPuzzle *puzzle)
{
    // Function to print the solved puzzle
    int size;
    int i;
    int j;
    char space;
    char newline;
    char num_char;

    space = ' ';
    newline = '\n';

    size = puzzle->board.size;
    i = 0;
    while (i < size)
    {
        j = 0;
        while (j < size)
        {
            num_char = puzzle->board.cells[i][j] + '0';
            write(1, &num_char, 1);
            write(1, &space, 1);
            j++;
        }
        write(1, &newline, 1);
        i++;
    }
}

int parse_input(char *input_str, SkyscraperPuzzle *puzzle);

int main()
{
    SkyscraperPuzzle puzzle;

    char input_str[] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";

    if (parse_input(input_str, &puzzle))
    {
        if (solve_puzzle_backtrack(&puzzle))
        {
            print_solved_puzzle(&puzzle);
        }
        else
        {
            char error_msg[] = "Error parsing input. \n";
            int i = 0;
            while (error_msg[i] != '\0')
            {
                ft_putchar(error_msg[i]);
                i++;
            }
        }
    }
    else
    {
        char error_msg[] = "Error parsing input. \n";
        int i = 0;
        while (error_msg[i] != '\0')
        {
            ft_putchar(error_msg[i]);
            i++;
        }
    }
    return (0);
}