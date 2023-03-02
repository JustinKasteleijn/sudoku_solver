//
// Created by justi on 3/2/2023.
//

#include <iostream>
#include "SudokuFactory.h"
#include "SudokuSolver.h"
#include "SudokuSolverTest.h"

int main() {
    int grid[9][9];
    SudokuFactory::get_sudoku(grid);
    SudokuSolver::print_sudoku(grid);
    std::cout << SudokuSolver::solve(grid);
    std::cout << '\n';
    SudokuSolver::print_sudoku(grid);
    SudokuSolverTest::compare(grid);
}
