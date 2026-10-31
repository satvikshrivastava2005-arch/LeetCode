class Solution {
public:
    string decodeString(string s) {
        stack<string>st;
        string ans="";
        int current=0;
        for(int i =0 ; i<s.size(); i++){
            if(isdigit(s[i])){
             current=current*10+(s[i]-'0');
            }
            else if(s[i]=='['){
                st.push(ans);
                st.push(to_string(current));
                ans="";
                current=0;
            }
            else if (s[i]==']'){
                int num=stoi(st.top());
                st.pop();
                string t= ans;
                for(int j = 1 ; j<num ; j++){
                    ans+=t;
                }
                ans=st.top()+ans;
                st.pop();
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};