
/* sort the elements
	Since majority element occurence is >n/2
	It has to be present in the middle of sorted array */

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];        
    }
};