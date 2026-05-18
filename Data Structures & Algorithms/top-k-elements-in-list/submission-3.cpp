class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        vector<vector<int>> fre(nums.size()+1);
        for(int num:nums){
            count[num]++;
        }
        for(auto &it:count){
            fre[it.second].push_back(it.first);
        }
        vector<int> ans;
        for(int i=fre.size()-1;i>0 && ans.size()<k;i--){
            for(int n:fre[i]){
                ans.push_back(n);
                if(ans.size()>k) break;
            }
        }
        return ans;
    }
};
