class Solution {
public:
    bool isPalindrome(string s) {
        string limpa;
        for (char c : s) {
            if (isalnum(c)){
                limpa += tolower(c);
            }
    }
        for (int i = 0; i < limpa.size(); i++){
            if (limpa[i] != limpa[limpa.size() - 1 - i]) return false;
        }
        return true;
    }
};