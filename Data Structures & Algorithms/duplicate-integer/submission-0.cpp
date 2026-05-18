class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> num;
        for(int n:nums){
            num[n]++;
            if(num[n]>1){
                return true;
            }
        }
        return false;
    }
};