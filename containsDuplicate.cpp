class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        /*
        for (int i = 0; i < nums.size();i++){
            for (int j = i + 1; j < nums.size();j++){
                if (nums[i] == nums[j]) {
                    return true;
                }
            }
        }
        return false;   
    }
    */
        sort(nums.begin(), nums.end());   // ordena o vetor
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) { // igual ao vizinho?
                return true;
            }
        }
        return false;
    }
};
