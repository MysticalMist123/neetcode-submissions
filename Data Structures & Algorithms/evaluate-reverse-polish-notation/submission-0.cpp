class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> s;
        for(string t:tokens){
            if(t=="+"){
                int b = stoi(s.top());
                s.pop();
                int a = stoi(s.top());
                s.pop();
                s.push(to_string(a+b));
            }
            else if(t=="-"){
                int b = stoi(s.top());
                s.pop();
                int a = stoi(s.top());
                s.pop();
                s.push(to_string(a-b));
            } 
            else if(t=="*"){
                int b = stoi(s.top());
                s.pop();
                int a = stoi(s.top());
                s.pop();
                s.push(to_string(a*b));
            } 
            else if(t=="/"){
                int b = stoi(s.top());
                s.pop();
                int a = stoi(s.top());
                s.pop();
                s.push(to_string(a/b));
            }
            else{
                s.push(t);
            }
        }
        return stoi(s.top());
    }
};
