class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> count1;
        vector<vector<string>> ans;
        for(string s:strs){
            vector<int> count(26,0);
            for(char ch:s){
                count[ch-'a']++;
            }
            string key=to_string(count[0]);
            for(int i=0;i<26;i++){
                key+=','+to_string(count[i]);
            }
            count1[key].push_back(s);
        }
        for(auto &it:count1){
            ans.push_back(it.second);
        }
        return ans;
    }
};
