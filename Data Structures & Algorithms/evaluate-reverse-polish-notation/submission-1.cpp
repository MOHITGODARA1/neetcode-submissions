class Solution {
public:
    int evalRPN(vector<string>& s) {
        stack<int> c;
        for(int i=0;i<s.size();i++){
            if(s[i]!="+" && s[i]!="-" && s[i]!="*" && s[i]!="/"){
                c.push(stoi(s[i]));
            }else{
                int a=c.top();c.pop();
                int b=c.top();c.pop();
                if(s[i]=="+"){
                    c.push(a+b);
                }
                else if(s[i]=="-"){
                    c.push(b-a);
                }
                else if(s[i]=="*"){
                    c.push(b*a);
                }
                else{
                    c.push(b/a);
                }
            }
        }
        return c.top();
    }
};
