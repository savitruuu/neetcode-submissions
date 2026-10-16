class Solution {
   public:
    string firstPalindrome(vector<string>& words) {
        vector<string> temp;
        string result = "";
        for (int i = 0; i < words.size(); i++) {
            string s = words[i];
            reverse(s.begin(), s.end());
            temp.push_back(s);
        }

        int i = 0;
        int j = 0;

        while (i < words.size() && j < temp.size()) {
            if (words[i] == temp[j]) {
                result = words[i];
                break;
            }
            i++;
            j++;
        }
        return result;
    }
};
