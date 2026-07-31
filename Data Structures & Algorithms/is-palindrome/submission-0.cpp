class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned;
        for(char c: s)
        {
            if(isalnum(c))
            {
                cleaned += tolower(c);
            }
        }
        string r = cleaned;
        reverse(r.begin(), r.end());
        if(r == cleaned)
        {
            return true;
        }
        return false;
    }
};
