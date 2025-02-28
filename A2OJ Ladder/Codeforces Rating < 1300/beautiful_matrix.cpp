#include <iostream>
using namespace std;

void solve() {
    int n = 5;
    int matrix[n][n];
    int moves = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> matrix[i][j];
            if(matrix[i][j] == 1) {
                moves = abs(i-2)+abs(j-2);
            }
        }
    }
    cout << moves << endl;
}

int main() {
    solve();
}