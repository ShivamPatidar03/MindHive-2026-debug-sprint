// MindHive 2026 - Debug Sprint
// Q1: Matrix Multiplication Engine

#include <iostream>
using namespace std;

int main() {
    int r1 = 2, c1 = 2, r2 = 2, c2 = 2;

    int A[r1][c1], B[r2][c2], C[r1][c2];

    for(int i = 0; i <= r1; i++) {       
        for(int j = 0; j < c1; j++) {
            cin >> A[i][j];
        }
    }

    for(int i = 0; i < r2; i++) {
        for(int j = 0; j <= c2; j++) {           
            cin >> B[i][j];
        }
    }

    for(int i = 0; i < r1; i++) { 
        for(int j = 0; j < c2; j++) {

            for(int k = 0; k <= c1; k++) {         
                C[i][j] += A[i][k] + B[j][k];     
            }
        }
    }

    cout << "Result Matrix:\n";
    for(int i = 0; i <= r1; i++) {                
        for(int j = 0; j < c2; j++) {
            cout << C[j][i] << " ";               
        }
        cout << endl;
    }

    return 0;
}
