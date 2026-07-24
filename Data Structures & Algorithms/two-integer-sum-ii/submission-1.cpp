class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        if(nums.size()==2){
            return {1,2};
        }
        int left=0,right=nums.size()-1;
        while(left<right){
           if(nums[left]+nums[right]==target){
                return {left+1,right+1};
           }
           if(nums[left]+nums[right]<target){
                left++;
           }else{
            right--;
           }
        }
        return {};
    }
};
