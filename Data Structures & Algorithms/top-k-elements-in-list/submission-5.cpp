class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<vector<int>> bucket(nums.size()+1);
        for(auto& it:mp){
            bucket[it.second].push_back(it.first);
        }
        vector<int> anss;
        for(int i=bucket.size()-1;i>=0;i--){
            for(int num:bucket[i]){
                anss.push_back(num);
                if(anss.size()==k){
                    return anss;
                }
            }
            
        }
        return anss;


    }
};
