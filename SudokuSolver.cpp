//
// Created by justi on 3/2/2023.
//

#include <iostream>
#include "SudokuSolver.h"

void SudokuSolver::print_sudoku(const int grid[9][9]) {
    for (int r = 0; r < 9; r++) {
        std::cout << '\n';
        for (int c = 0; c < 9; c++) {
            std::cout << grid[r][c];
        }
    }
    std::cout << '\n';
}

bool SudokuSolver::solve(int grid[9][9]) {
    int row, col;

    if (!find_empty_cell(grid, row, col))
        return true;

    for (int val = 1; val <= 9; val++) {
        if (no_conflict(grid, row, col, val)) {
            grid[row][col] = val;
            if(solve(grid))
                return true;
            grid[row][col] = 0;
        }
    }
    return false;
}

bool SudokuSolver::find_empty_cell(const int grid[9][9], int &row, int &col) {
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 9; c++) {
            if (grid[r][c] == 0) {
                row = r;
                col = c;
                return true;
            }
        }
    }
    return false;
}

bool SudokuSolver::no_conflict(const int grid[9][9], const int &row, const int &col, const int &num) {
    return col_check(grid, col, num) && row_check(grid, row, num) && matrix_check(grid, row, col, num);
}

bool SudokuSolver::col_check(const int grid[9][9], const int &col, const int &num) {
    for (int i = 0; i < 9; i++) {
        //std::cout << std::to_string(grid[i][col]) + '\n';
        if (num == grid[i][col])
            return false;
    }
    return true;
}

bool SudokuSolver::row_check(const int grid[9][9], const int &row, const int &num) {
    for (int i = 0; i < 9; i++) {
        if (num == grid[row][i])
            return false;
    }
    return true;
}

bool SudokuSolver::matrix_check(const int (*grid)[9], const int &row, const int &col, const int &num) {
    int r = (row / 3) * 3 + 1;
    int c = (col / 3) * 3 + 1;

    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            if (num == grid[r + i][c + j]) {
                return false;
            }
        }
    }
    return true;
}

