class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> count;
        int ans=0,left=0;
        for(int i=0;i<s.size();i++){
            count[s[i]]++;
            while(count[s[i]]>1){
                count[s[left]]--;
                left++;
            }
            ans=max(ans,i-left+1);
        }
        return ans;
    }
};
