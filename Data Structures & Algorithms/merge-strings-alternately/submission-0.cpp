class Solution {
   public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int l = 0;
        int r = 0;

        while (l < word1.length() && r < word2.length()) {
            result += word1[l];
            result += word2[r];
            l++;
            r++;
        }
        result += word1.substr(l);
        result += word2.substr(r);
        return result;
    }
};