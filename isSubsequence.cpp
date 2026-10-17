class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0;
        for (int i = 0; i < s.size(); i++){
            while (j < t.size() && s[i] != t[j]){ // stops if t "ended" or letter founded
                j++;
            }

            if (j == t.size()) return false; // checks if t "ended"

            j++; // step ahead (bc j stops on the letter)
        }
        return true;
    }
};