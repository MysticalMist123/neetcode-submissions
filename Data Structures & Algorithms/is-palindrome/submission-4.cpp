class Solution {
public:
    bool isPalindrome(string str) {
        int s = 0, e = str.size()-1;
        while(s<e){
            while(!isalpha(str[s]) && !isdigit(str[s])) s++;
            while(!isalpha(str[e]) && !isdigit(str[e])) e--;
            if(s>=e) break;
            if(tolower(str[s])!=tolower(str[e])) return false;
            s++;e--;
        }
        return true;
    }
};
