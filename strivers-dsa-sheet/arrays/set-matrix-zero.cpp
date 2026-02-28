/* Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.. */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<vector<int>> matrix = {{3, 0, 6, 7}, {4, 1, 2, 3}, {5, 3, 0, 9}, {6, 4, 9, 1}};
    int row = matrix.size();
    
    bool fr = false, fc = false;
    for (int i = 0; i < row; i++) {
        if (matrix[i][0] == 0) fc = true;
        if (matrix[0][i] == 0) fr = true; 
    }

    for (int i = 1; i < row; i++) {
        for (int j = 1; j < matrix[i].size(); j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    for (int i = 1; i < row; i++) {
        for (int j = 1; j < matrix[i].size(); j++) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) matrix[i][j] = 0;       
        }
    }

    for (int i = 0; i < row; i++) {
            if (fc) matrix[i][0] = 0;
            if (fr) matrix[0][i] = 0;
    }

    for (auto i : matrix) {
        for (auto j : i) cout << j << " ";
        cout << endl;
    }

    return 0;
}