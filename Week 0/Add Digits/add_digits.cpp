// Leet Code - Add Digits Solution in C++
// https://leetcode.com/problems/add-digits/
// Linear Solution

class Solution {
public:
    int addDigits(int num) {
        int result = 0;
        
        while(num > 0) {
            result += (int)num - (int)(num/10)*10;
            num = (int)num/10;
        }
        
        if (result/10 > 0) {
            result = addDigits(result); 
        }
        
        return result;
    }
};

