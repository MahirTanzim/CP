#include <iostream>
#include <vector>

using namespace std;

void printMatrix(int n) {
    vector<vector<int>> matrix(n, vector<int>(n, 0));
    int num = 1;

    // Fill the matrix diagonally
    for (int col = 0; col < n; col++) {
        int i = 0, j = col;
        while (i < n && j >= 0) {
            matrix[i][j] = num++;
            i++;
            j--;
        }
    }

    for (int row = 1; row < n; row++) {
        int i = row, j = n - 1;
        while (i < n && j >= 0) {
            matrix[i][j] = num++;
            i++;
            j--;
        }
    }

    // Print the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    // cout << "Enter the size of the matrix: ";
    cin >> n;

    printMatrix(n);

    return 0;
}
