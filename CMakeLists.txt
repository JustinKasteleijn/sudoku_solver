cmake_minimum_required(VERSION 3.15)
project(sudoku_solver)

set(CMAKE_CXX_STANDARD 14)

add_executable(sudoku_solver main.cpp FileUtils.cpp SudokuFactory.cpp SudokuSolver.cpp)
