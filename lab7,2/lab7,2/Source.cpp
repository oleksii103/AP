#include <iostream>
#include <ctime>

template <typename T>
T findMaxAboveSecondaryDiagonal(T A[][4], int N) {
    T max = A[0][0];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            if (i + j < N - 1) {
                if (A[i][j] > max) {
                    max = A[i][j];
                }
            }
        }
    }

    return max;
}

int main() {
    const int N = 4;
    int A[N][N];

    srand(time(0));

    std::cout << "Matrix:\n";

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            A[i][j] = rand() % 100;
            std::cout << A[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    int max = findMaxAboveSecondaryDiagonal(A, N);

    std::cout << "\nMaximum element: " << max;

    return 0;
}