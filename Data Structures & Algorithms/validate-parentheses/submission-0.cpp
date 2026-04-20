class Solution {
    bool match_paranthesis(char* in, char* top){
        if(*in=='}' && *top=='{') return true;
        if(*in==']' && *top=='[') return true;
        if(*in==')' && *top=='(') return true;
        return false;
    }
public:
    bool isValid(string s) {
        char stk[1002];
        int top = -1;
        for(int i=0;i<s.size();i++){
            if(top==-1){
                top++;
                stk[top] = s[i];
            }
            else if(match_paranthesis(&s[i], &stk[top])){
                top--;
            }
            else{
                top++;
                stk[top] = s[i];
            }
        }
        if(top==-1) return true;
        return false;
    }
};
