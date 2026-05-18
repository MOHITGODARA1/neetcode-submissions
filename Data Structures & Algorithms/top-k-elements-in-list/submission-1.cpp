class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        
        for(int num:nums){
            count[num]++;
        }
        priority_queue<pair<int,int>> check;
        for(auto &it:count){
            check.push({it.second,it.first});
        }
        vector<int> ans;
        while(k--){
            ans.push_back(check.top().second);
            check.pop();
        }
        return ans;
    }
};
