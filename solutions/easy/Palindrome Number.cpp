// Title: Palindrome Number
// Difficulty: Easy
// Language: C++
// Link: https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {

        long long rev = 0;
        int ogX = x;

        if (x < 0)
            return false;

        while (x != 0) {
            int lastdigit = x % 10;
            rev = rev * 10 + lastdigit;
            x = x / 10;
        }

        return rev == ogX;
    }
};