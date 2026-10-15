class Solution {
   public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        int j = 0;
        string res;

        while (i < word1.size() && j < word2.size()) {
            res = res + word1[i];
            i++;
            res = res + word2[j];
            j++;
        }
        res = res + word1.substr(i);
        res = res + word2.substr(j);
        return res;
    }
};