class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int write = 0;
        int read = 0;

        while (read < n) {
            char currentChar = chars[read];
            int count = 0;

            // Count frequency of currentChar
            while (read < n && chars[read] == currentChar) {
                read++;
                count++;
            }

            // Write character
            chars[write++] = currentChar;

            // Write count if > 1
            if (count > 1) {
                string cnt = to_string(count);
                for (char c : cnt) {
                    chars[write++] = c;
                }
            }
        }
        return write;
    }
};
