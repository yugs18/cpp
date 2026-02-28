/* Given an N * N 2D integer matrix, rotate the matrix by 90 degrees clockwise. The rotation must be done in place, meaning the input 2D matrix must be modified directly.. */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<vector<int>> matrix = {{0, 1, 1, 2}, {2, 0, 3, 1}, {4, 5, 0, 5}, {5, 6, 7, 0}};
    int row = matrix.size();

    for (int i = 0; i < row; i++) {
        for (int j = i; j < matrix[i].size(); j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < row; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }

    for (auto row : matrix) {
        for (auto el : row) cout << el << " ";
        cout << endl;
    }
}