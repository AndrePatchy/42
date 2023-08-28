def is_valid(board, clues, row, col):
    for i in range(row):
        if board[i][col] >= board[row][col]:
            return False

    for j in range(col):
        if board[row][j] >= board[row][col]:
            return False

    row_view = 1
    for i in range(row - 1, -1, -1):
        if board[i][col] > board[row][col]:
            row_view += 1
    if row_view != clues[col]:
        return False

    col_view = 1
    for j in range(col - 1, -1, -1):
        if board[row][j] > board[row][col]:
            col_view += 1
    if col_view != clues[row + 4]:
        return False

    return True

def solve_board(board, clues, row=0, col=0):
    if row == 4:
        return True

    next_row = (row + 1) % 4
    next_col = col + 1 if next_row == 0 else col

    for height in range(1, 5):
        board[row][col] = height
        if is_valid(board, clues, row, col):
            if solve_board(board, clues, next_row, next_col):
                return True

    board[row][col] = 0
    return False

def main():
    input_string = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
    clues = list(map(int, input_string.split()))

    board = [[0 for _ in range(4)] for _ in range(4)]

    if solve_board(board, clues):
        for row in board:
            print(*row)
    else:
        print("No valid solution found.")

if __name__ == "__main__":
    main()

