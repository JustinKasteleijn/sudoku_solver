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
    static std::string build_failed_test_message(const int& row, const int& col);
};


#endif //SUDOKU_SOLVER_SUDOKUSOLVERTEST_H
