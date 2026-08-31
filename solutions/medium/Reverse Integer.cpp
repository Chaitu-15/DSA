// Title: Reverse Integer
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/reverse-integer/

class Solution {
public:
    int reverse(int x) {
        long long  revNo = 0;
        while(x != 0){
           
            int lastdigit = x%10;
            x = x / 10;
            revNo = revNo * 10 + lastdigit;
        }
            if( revNo > INT_MAX || revNo < INT_MIN){
                return 0;
            }
        return (int)revNo;
    }
};
