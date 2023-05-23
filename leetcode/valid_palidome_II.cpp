// This is the solution of leetcode problem named as : Valid palidrome II 
// link of the problem : https://leetcode.com/problems/valid-palindrome-ii/description/

class Solution {
public:
    bool checkpalidrome(string s, int i, int j)
    {
        while(i <= j )
        {
            if(s[i] == s[j])
            {
                i++;
                j--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;
        while(i <= j)
        {
            if(s[i] == s[j])
            {
                i++;
                j--;
            }
            else
            {
              return checkpalidrome(s, i+1, j) || checkpalidrome(s, i, j-1); 
            }
        }
        return true;
    }
};