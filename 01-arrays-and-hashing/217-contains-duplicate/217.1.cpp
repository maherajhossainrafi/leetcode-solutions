class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
         unordered_set<int>check;
        for(int i = 0 ; i<nums.size();i++)
        {
            if(check.count(nums[i]))
            {
                return true ;
            }            
            check.insert(nums[i]);
   
        }           
            return false; 
        
    }
};