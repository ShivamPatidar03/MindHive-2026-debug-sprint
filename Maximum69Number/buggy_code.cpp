// MindHive 2026 - Debug Sprint
// Q5: Digit Maximizer Transformation

#include <iostream>
using namespace std;

int maximum69Number(int num) {
    string s = num;                 

    for (int i = s.length()-1; i >= 0; i++) {   
        if (s[i] == 6) {           
            s[i] = 9;          
            return stoi(s);
        }
    }

    return s;                     
}

int main() {
    int n;
    cin >> n;
    cout << maximum69Number(n=1);
    return 0;
}
