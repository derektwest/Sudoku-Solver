// Sudoku Solver.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <vector>

int main(){

    // Starting with a blank "board" of char type
    std::vector <char> A(9, ' ');
    std::vector <char> B(9, ' ');
    std::vector <char> C(9, ' ');
    std::vector <char> D(9, ' ');
    std::vector <char> E(9, ' ');
    std::vector <char> F(9, ' ');
    std::vector <char> G(9, ' ');
    std::vector <char> H(9, ' ');
    std::vector <char> I(9, ' ');

    // Used to input known numbers of Sudoku puzzle
    char selection_letter{};
    int selection_number{};
    char answer_input{};

    // Do/while loop used to display board and ask for input from user
    // you can minimize this massive wall of code for ease of view
    do {
        std::cout << A[0] << " " << A[1] << " " << A[2] << " | " << B[0] << " " << B[1] << " " << B[2] << " | " << C[0] << " " << C[1] << " " << C[2] << std::endl;
        std::cout << A[3] << " " << A[4] << " " << A[5] << " | " << B[3] << " " << B[4] << " " << B[5] << " | " << C[3] << " " << C[4] << " " << C[5] << std::endl;
        std::cout << A[6] << " " << A[7] << " " << A[8] << " | " << B[6] << " " << B[7] << " " << B[8] << " | " << C[6] << " " << C[7] << " " << C[8] << std::endl;
        std::cout << "---------------------" << std::endl;

        std::cout << D[0] << " " << D[1] << " " << D[2] << " | " << E[0] << " " << E[1] << " " << E[2] << " | " << F[0] << " " << F[1] << " " << F[2] << std::endl;
        std::cout << D[3] << " " << D[4] << " " << D[5] << " | " << E[3] << " " << E[4] << " " << E[5] << " | " << F[3] << " " << F[4] << " " << F[5] << std::endl;
        std::cout << D[6] << " " << D[7] << " " << D[8] << " | " << E[6] << " " << E[7] << " " << E[8] << " | " << F[6] << " " << F[7] << " " << F[8] << std::endl;
        std::cout << "---------------------" << std::endl;

        std::cout << G[0] << " " << G[1] << " " << G[2] << " | " << H[0] << " " << H[1] << " " << H[2] << " | " << I[0] << " " << I[1] << " " << I[2] << std::endl;
        std::cout << G[3] << " " << G[4] << " " << G[5] << " | " << H[4] << " " << H[4] << " " << H[5] << " | " << I[3] << " " << I[4] << " " << I[5] << std::endl;
        std::cout << G[6] << " " << G[7] << " " << G[8] << " | " << H[6] << " " << H[7] << " " << H[8] << " | " << I[6] << " " << I[7] << " " << I[8] << std::endl;

        std::cin >> selection_letter>>selection_number>>answer_input;

        switch (selection_letter) {
            case 'x'|| 'X':
                continue;
            case 'A':
                switch (selection_number) {                   
                case 1:
                    A[0] = answer_input;
                    break;
                case 2:
                    A[1] = answer_input;
                    break;
                case 3:
                    A[2] = answer_input;
                    break;
                case 4:
                    A[3] = answer_input;
                    break;
                case 5:
                    A[4] = answer_input;
                    break;
                case 6:
                    A[5] = answer_input;
                    break;
                case 7:
                    A[6] = answer_input;
                    break;
                case 8:
                    A[7] = answer_input;
                    break;
                case 9:
                    A[8] = answer_input;
                    break;

                default:
                    std::cout << "default" << std::endl;
                }
                break;

            case 'B':
                switch (selection_number) {
                case 1:
                    B[0] = answer_input;
                    break;
                case 2:
                    B[1] = answer_input;
                    break;
                case 3:
                    B[2] = answer_input;
                    break;
                case 4:
                    B[3] = answer_input;
                    break;
                case 5:
                    B[4] = answer_input;
                    break;
                case 6:
                    B[5] = answer_input;
                    break;
                case 7:
                    B[6] = answer_input;
                    break;
                case 8:
                    B[7] = answer_input;
                    break;
                case 9:
                    B[8] = answer_input;
                    break;
                default:
                    std::cout << "default" << std::endl;
                }
                break;

            case 'C':
                switch (selection_number) {
                case 1:
                    C[0] = answer_input;
                    break;
                case 2:
                    C[1] = answer_input;
                    break;
                case 3:
                    C[2] = answer_input;
                    break;
                case 4:
                    C[3] = answer_input;
                    break;
                case 5:
                    C[4] = answer_input;
                    break;
                case 6:
                    C[5] = answer_input;
                    break;
                case 7:
                    C[6] = answer_input;
                    break;
                case 8:
                    C[7] = answer_input;
                    break;
                case 9:
                    C[8] = answer_input;
                    break;
                default:
                    std::cout << "default" << std::endl;
                }
                break;

            case 'D':
                switch (selection_number) {
                case 1:
                    D[0] = answer_input;
                    break;
                case 2:
                    D[1] = answer_input;
                    break;
                case 3:
                    D[2] = answer_input;
                    break;
                case 4:
                    D[3] = answer_input;
                    break;
                case 5:
                    D[4] = answer_input;
                    break;
                case 6:
                    D[5] = answer_input;
                    break;
                case 7:
                    D[6] = answer_input;
                    break;
                case 8:
                    D[7] = answer_input;
                    break;
                case 9:
                    D[8] = answer_input;
                    break;
                default:
                    std::cout << "default" << std::endl;
                }
                break;

            case 'E':
                switch (selection_number) {
                case 1:
                    E[0] = answer_input;
                    break;
                case 2:
                    E[1] = answer_input;
                    break;
                case 3:
                    E[2] = answer_input;
                    break;
                case 4:
                    E[3] = answer_input;
                    break;
                case 5:
                    E[4] = answer_input;
                    break;
                case 6:
                    E[5] = answer_input;
                    break;
                case 7:
                    E[6] = answer_input;
                    break;
                case 8:
                    E[7] = answer_input;
                    break;
                case 9:
                    E[8] = answer_input;
                    break;
                default:
                    std::cout << "default" << std::endl;
                }
                break;

            case 'F':
                switch (selection_number) {
                case 1:
                    F[0] = answer_input;
                    break;
                case 2:
                    F[1] = answer_input;
                    break;
                case 3:
                    F[2] = answer_input;
                    break;
                case 4:
                    F[3] = answer_input;
                    break;
                case 5:
                    F[4] = answer_input;
                    break;
                case 6:
                    F[5] = answer_input;
                    break;
                case 7:
                    F[6] = answer_input;
                    break;
                case 8:
                    F[7] = answer_input;
                    break;
                case 9:
                    F[8] = answer_input;
                    break;
                default:
                    std::cout << "default" << std::endl;
                }
                break;

            case 'G':
                switch (selection_number) {
                case 1:
                    G[0] = answer_input;
                    break;
                case 2:
                    G[1] = answer_input;
                    break;
                case 3:
                    G[2] = answer_input;
                    break;
                case 4:
                    G[3] = answer_input;
                    break;
                case 5:
                    G[4] = answer_input;
                    break;
                case 6:
                    G[5] = answer_input;
                    break;
                case 7:
                    G[6] = answer_input;
                    break;
                case 8:
                    G[7] = answer_input;
                    break;
                case 9:
                    G[8] = answer_input;
                    break;
                default:
                    std::cout << "default" << std::endl;
                }
                break;

            case 'H':
                switch (selection_number) {
                case 1:
                    H[0] = answer_input;
                    break;
                case 2:
                    H[1] = answer_input;
                    break;
                case 3:
                    H[2] = answer_input;
                    break;
                case 4:
                    H[3] = answer_input;
                    break;
                case 5:
                    H[4] = answer_input;
                    break;
                case 6:
                    H[5] = answer_input;
                    break;
                case 7:
                    H[6] = answer_input;
                    break;
                case 8:
                    H[7] = answer_input;
                    break;
                case 9:
                    H[8] = answer_input;
                    break;
                default:
                    std::cout << "default" << std::endl;
                }
                break;

            case 'I':
                switch (selection_number) {
                case 1:
                    I[0] = answer_input;
                    break;
                case 2:
                    I[1] = answer_input;
                    break;
                case 3:
                    I[2] = answer_input;
                    break;
                case 4:
                    I[3] = answer_input;
                    break;
                case 5:
                    I[4] = answer_input;
                    break;
                case 6:
                    I[5] = answer_input;
                    break;
                case 7:
                    I[6] = answer_input;
                    break;
                case 8:
                    I[7] = answer_input;
                    break;
                case 9:
                    I[8] = answer_input;
                    break;
                default:
                    std::cout << "default" << std::endl;
                }
                break;

            default:
                std::cout<<"Incorrect Input: Try Again/ this is incorect. its not checking if selection letter is x or X"<<std::endl;
                char selection_letter{};
                int selection_number{};
                char answer_input{};
        }
        // "x" is used to exit loop and begin solving
    } while (selection_letter != 'x' && selection_letter != 'X');

    //collect char vectors into their own vector (2d) and convert to int
    std::vector <std::vector<char>> char_vec = { A,B,C,D,E,F,G,H,I };
    std::vector <std::vector<int>> int_vec(9); // also 2d but should be 3d, starts with 9 empty "cells" 
    for (std::size_t i = 0; i < char_vec.size(); ++i) {
        for (std::size_t j = 0; j < char_vec[i].size(); ++j) {
            //convert to int here, -48 for utf-8 character set
            int x = char_vec[i][j] - 48;
            int_vec[i].push_back(x);
        }
    }

    // this is where the problems are arising error: C2228
    // I need int_vec to be 3d for the board to build the way I envisioned it in my mind
    std::vector <int> possible_solutions{ 1,2,3,4,5,6,7,8,9 };
    for (size_t i = 0; i < int_vec.size(); ++i) {
        for (size_t j = 0; j < int_vec[i].size(); ++i) {
            if (int_vec[i][j] == -16)
                int_vec[i][j].push_back(3);
                int_vec[i][j].push_back(possible_solutions);
        }
    }

    return 0;
}