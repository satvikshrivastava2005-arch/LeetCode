class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long >s;
        for(int i = 0 ; i < tokens.size(); i++){
         if(tokens[i]!="+" && tokens[i]!="/" && tokens[i]!="*" && tokens[i]!="-" ){
             s.push(stoi(tokens[i]));
            }
         else{
            long long b= s.top();
            s.pop();
            long long a = s.top();
            s.pop();

                if(tokens[i] == "+") s.push(a + b);
                else if(tokens[i] == "-") s.push(a - b);
                else if(tokens[i] == "*") s.push(a * b);
                else if(tokens[i] == "/") s.push(a / b);
          }}
         return s.top();
    }
};