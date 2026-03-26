#include <iostream>
#include <random>
#include <algorithm>

int main() {
	int c;
	std::cout << "chose task: "; std::cin >> c;
	switch(c) {

	case 1: {
			int size;
			int* arr;
			std::cout << "enter arr size: "; std::cin >> size;
			arr = new int[size];
			srand(time(0));
			std::cout << "arr defore" << std::endl;
			for (int i = 0; i < size; i++) {
				arr[i] = rand() % 101 - 50;
				std::cout << arr[i] << " ";
			}
			std::cout << std::endl;
			std::cout << "arr after" << std::endl;
			for (int i = 0; i < size; i++) {
				if (arr[i] < 0) {
					arr[i] = 0;
					std::cout << arr[i] << " ";
				}
				else {
					std::cout << arr[i] << " ";
				}
			}
			delete[] arr;
            break;
		}
	case 2: {

        int n, m;
        std::cout << "enter the number of rows: ";
        std::cin >> n;
        std::cout << "enter the number of columns: ";
        std::cin >> m;

        int** arr = new int* [n];
        for (int i = 0; i < n; i++) {
            arr[i] = new int[m];
        }

        std::srand(std::time(0));

        std::cout << "Array:" << std::endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                arr[i][j] = std::rand() % 101 - 50;
                std::cout << arr[i][j] << "\t";
            }
            std::cout << std::endl;
        }

        std::cout << "maximum column element:" << std::endl;
        for (int j = 0; j < m; j++) {
            int* column = new int[n];
            for (int i = 0; i < n; i++) {
                column[i] = arr[i][j];
            }

            int maxElement = *std::max_element(column, column + n); 
            std::cout << "column " << j + 1 << ": " << maxElement << std::endl;

            delete[] column; 
        }

        for (int i = 0; i < n; i++) {
            delete[] arr[i];
        }
        }
	}
	return 0;
}