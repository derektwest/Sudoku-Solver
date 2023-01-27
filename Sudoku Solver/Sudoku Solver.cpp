// Sudoku Solver.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int main(){
    /*std::vector <int> A{ 1,2,3,4,5,6,7,8,9 };
    std::vector <int> B{ 1,2,3,4,5,6,7,8,9 };
    std::vector <int> C{ 1,2,3,4,5,6,7,8,9 };
    std::vector <int> D{ 1,2,3,4,5,6,7,8,9 };
    std::vector <int> E{ 1,2,3,4,5,6,7,8,9 };
    std::vector <int> F{ 1,2,3,4,5,6,7,8,9 };
    std::vector <int> G{ 1,2,3,4,5,6,7,8,9 };
    std::vector <int> H{ 1,2,3,4,5,6,7,8,9 };
    std::vector <int> I{ 1,2,3,4,5,6,7,8,9 };*/

    std::vector <char> A(9, ' ');
    std::vector <char> B(9, ' ');
    std::vector <char> C(9, ' ');
    std::vector <char> D(9, ' ');
    std::vector <char> E(9, ' ');
    std::vector <char> F(9, ' ');
    std::vector <char> G(9, ' ');
    std::vector <char> H(9, ' ');
    std::vector <char> I(9, ' ');



    char selection_letter{};
    int selection_number{};

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

        std::cin >> selection_letter>>selection_number;

        switch (selection_letter) {
            case 'A':
                switch (selection_number) {                   
                    case 1:
                        std::cout << A[0] << std::endl;
                        break;
                    case 2:
                        std::cout << A[1] << std::endl;
                        break;
                    case 3:
                        std::cout << A[2] << std::endl;
                        break;
                    case 4:
                        std::cout << A[3] << std::endl;
                        break;
                    case 5:
                        std::cout << A[4] << std::endl;
                        break;
                    case 6:
                        std::cout << A[5] << std::endl;
                        break;
                    case 7:
                        std::cout << A[6] << std::endl;
                        break;
                    case 8:
                        std::cout << A[7] << std::endl;
                        break;
                    case 9:
                        std::cout << A[8] << std::endl;
                        break;
                    default:
                        std::cout << "default" << std::endl;
                }
        }

    } while (selection_letter != 'q' && selection_letter != 'Q');



    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
