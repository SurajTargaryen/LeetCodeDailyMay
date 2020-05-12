/* XOR operation
   if both elements are same, it becomes zero
   also x ^ 0 = x
   so when all elements are xored, we get the single elements
   */

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int x=nums[0];
        for(int i=1;i<nums.size();i++)
            x = x^nums[i];
        return x;
        
    }
};