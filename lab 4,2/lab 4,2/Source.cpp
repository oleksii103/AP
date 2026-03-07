#include <iostream>
#include <cassert>

void fmin(const int arr[], int size, int& minValue, int& minIndex) {
    assert(size > 0);

    minValue = arr[0];
    minIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] < minValue) {
            minValue = arr[i];
            minIndex = i;
        }
    }
}

int main() {
    int minVal, minInd;

    int arr1[] = { 5, 0, -3, -7, 8 };

    fmin(arr1, 5, minVal, minInd);

    std::cout << "Minimum value: " << minVal << std::endl;
    std::cout << "Index: " << minInd << std::endl;

    return 0;
}