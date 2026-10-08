class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>check;
        check.reserve(nums.size());
        for (int x : nums) {
            if (!check.insert(x).second)
            {
                return true;
            }
        }
        return false;
    }
};