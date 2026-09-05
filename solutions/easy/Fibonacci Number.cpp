// Title: Fibonacci Number
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/fibonacci-number/

class Solution {
public:
    int fib(int n) {
        int a = 0 ;
        int b = 1 ;
        for(int i=2;i<=n;i++){
            int next = a + b;
            a=b;
            b=next;
        }
        return b;
    }
        if(n==0) return 0;
};
