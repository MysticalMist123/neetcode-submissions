class Solution {
    bool check_hash_maps(unordered_map<char,int>& m1, unordered_map<char,int>& m2){
        for(char c = 'a';c <= 'z';c++){
            if(m1[c]!=m2[c]) return false;
        }
        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        unordered_map<char,int> pat, curr;
        for(char c:s1){
            pat[c]++;
        }

        int l=0,r=0;
        for(int i=0;i<s1.size();i++){
            curr[s2[r]]++;
            r++;
        }
        r--;

        while(r<s2.size()){
            if(check_hash_maps(pat,curr)) return true;
            curr[s2[l]]--;
            l++;
            r++;
            if(r<s2.size()) curr[s2[r]]++;
        }

        return false;
    }
};
