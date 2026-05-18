class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
        for(string sh:strs){
            s+=to_string(sh.size())+"#"+sh;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> str;
        int i=0;
        while(s.size()>i){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int len=stoi(s.substr(i,j-i));

            str.push_back(s.substr(j+1,len));
            i=j+len+1;
        }
        return str;
    }
};
