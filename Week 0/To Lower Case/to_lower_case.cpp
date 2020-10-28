// Leet Code - to lower case 
// https://leetcode.com/problems/to-lower-case/
// Linear Solution

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string toLowerCase(string str) {
        string result = "";
        for(int i = 0; i < str.size(); i++) {
            if ((int)str[i] <= 90 && (int)str[i] >= 65) {
                result += (int)str[i] + 32;
            } else {
                result += str[i];
            }
        }
        return result;
    }
};

int main() {
    Solution s;
    cout << s.toLowerCase("Vish123") << endl;
    return 0;
}