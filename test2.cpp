#include <iostream>

using namespace std;

int main() {
    int n = 3;

    int* matrix = new int[n * n];

    for (int i = 0; i < n * n; ++i) {
        matrix[i] = i + 1;
    }


    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int index = i * n + j;
            cout << matrix[index] << " ";
        }
        cout << endl;
    }
    delete[] matrix;

    return 0;
}