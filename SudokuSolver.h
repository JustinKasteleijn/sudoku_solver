//
// Created by justi on 3/2/2023.
//

#ifndef SUDOKU_SOLVER_SUDOKUSOLVER_H
#define SUDOKU_SOLVER_SUDOKUSOLVER_H


class SudokuSolver {
public:
    static void print_sudoku(const int grid[9][9]);

    static bool solve(int grid[9][9]);

private:
    static bool find_empty_cell(const int grid[9][9], int &row, int &col);

    static bool no_conflict(const int grid[9][9], const int &row, const int &col, const int &num);

    static bool col_check(const int grid[9][9], const int &col, const int &num);

    static bool row_check(const int grid[9][9], const int &row, const int &num);

    static bool matrix_check(const int grid[9][9], const int &row, const int &col, const int& num);
};


#endif //SUDOKU_SOLVER_SUDOKUSOLVER_H
