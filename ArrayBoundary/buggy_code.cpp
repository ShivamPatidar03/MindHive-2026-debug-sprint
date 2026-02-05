// MindHive 2026 - Debug Sprint
// Q1: Common Prefix Analyzer 

#include <iostream>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string> strs) {

    string prefix = strs[0];
    int minLen = prefix.length();

    for (int i = 0; i < strs.size(); i++) {
        if (strs[i].length() > minLen) {     
            minLen = strs[i].length();
        }
    }

    for (int i = 1; i < strs.size(); i++) {
        string word = strs[i];
        int j = 0;

        while (j < minLen) {                
            if (prefix[j] = word[j]) {     
                j++;
            } else {
                break;
            }
        }

        prefix = word.substr(0, j);       
    }

    if (prefix.length() > minLen) {        
        prefix = prefix.substr(0, minLen - 1);
    }

    return prefix;
}

int main() {
    vector<string> strs = {"flower", "flow", "flight"};
    cout << "Longest Common Prefix: " << longestCommonPrefix(strs);
    return 0;
}
