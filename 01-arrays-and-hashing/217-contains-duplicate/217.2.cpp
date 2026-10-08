class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>check;
        for(int i = 0 ; i<nums.size();i++)
        {     
            auto a = check.insert(nums[i]);
            if(!a.second)
            {
                return true ;
            }            
        }           
        return false; 
    }
};