class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector <string>> group;
        
        for (string& word : strs){
            string key = word;
            sort(key.begin(), key.end());
            group[key].push_back(word); // map
        }

        vector <vector<string>> answer;

        for (auto& pass : group){ // auto instead of pair
            answer.push_back(pass.second); // vector
        }
        return answer; 
    }
};