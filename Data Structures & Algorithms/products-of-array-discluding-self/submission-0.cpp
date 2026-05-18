class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size(),1);
        vector<int> surffix(nums.size(),1);
        for(int i=0;i<nums.size();i++){
            int product=1;
            int j=i+1;
            while(j<nums.size()){
                product*=nums[j];
                j++;
            }
            prefix[i]=product;
        }
        for(int i=nums.size()-1;i>=0;i--){
            int product=1;
            int j=i-1;
            while(j>=0){
                product*=nums[j];
                j--;
            }
            surffix[i]=product;
        }
        vector<int> ans;
        for(int i=0;i<prefix.size();i++){
            ans.push_back(prefix[i]*surffix[i]);
        }
        return ans;
    }
};
