// Title: Valid Palindrome
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/valid-palindrome/


            // Compare characters
            
            if(tolower(s[left]) != tolower(s[right])){
                return false;
            }
            while(left<right && !isalnum(s[right])) right --;
            
            while(left< right && !isalnum(s[left])) left ++;

            // Move pointers
            left ++;
            right--;
        }

        return true;
    }
};
