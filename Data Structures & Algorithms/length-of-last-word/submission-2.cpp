class Solution {
   public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(), s.end());

        int i = 0;

        // Skip trailing spaces of original string
        while (i < s.size() && s[i] == ' ') {
            i++;
        }

        // Count the last word
        int length = 0;

        while (i < s.size() && s[i] != ' ') {
            length++;
            i++;
        }

        return length;
    }
};