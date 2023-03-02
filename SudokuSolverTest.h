#include <utility>

//
// Created by justi on 3/2/2023.
//

#ifndef SUDOKU_SOLVER_SUDOKUSOLVERTEST_H
#define SUDOKU_SOLVER_SUDOKUSOLVERTEST_H


class SudokuSolveFailedException : public std::exception {
private:
    std::string message;
public:
    explicit SudokuSolveFailedException(std::string  msg) : message(std::move(msg)) {}

    const char *what() const noexcept override {
        return message.c_str();
    }
};

class SudokuSolverTest {
public:
    static bool compare(const int grid[9][9]);
};


#endif //SUDOKU_SOLVER_SUDOKUSOLVERTEST_H
