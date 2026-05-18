class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> count2;
        vector<vector<string>> ans;
        for(string s:strs){
            vector<int> count(26,0);
            for(char ch:s){
                count[ch-'a']++;
            }
            string fre="";
            for(int i=0;i<26;i++){
                fre+=','+to_string(count[i]);
            }
            count2[fre].push_back(s);
        }
        for(auto &it:count2){
            ans.push_back(it.second);
        }
        return ans;
       
    }
};
