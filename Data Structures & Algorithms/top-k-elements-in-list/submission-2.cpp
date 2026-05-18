class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        
        for(int num:nums){
            count[num]++;
        }
        vector<vector<int>> check(nums.size()+1);
        for(auto &it:count){
            check[it.second].push_back(it.first);
        }
        vector<int> ans;
        for(int i=check.size()-1;i>=0 && ans.size()<k;i--){
            for(int num:check[i]){
                ans.push_back(num);
                if(ans.size()==k) break;
            }
        }
        return ans;
    }
};
