class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0;
        int ans = 0;
        unordered_map<char, int> char_occur;
        while(r<s.size()){
            char_occur[s[r]]++;
            while(l<r && char_occur[s[r]]>1){
                char_occur[s[l]]--;
                l++;
            }
            ans=max(r-l+1,ans);
            r++;
        }
        return ans;
    }
};
