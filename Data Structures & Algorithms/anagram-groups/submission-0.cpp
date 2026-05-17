class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> sts;
        for(string s:strs){
            sort(s.begin(),s.end());
            sts.push_back(s);
        }
        unordered_map<string,vector<string>> m;

        for(int i=0;i<strs.size();i++){
            m[sts[i]].push_back(strs[i]);
        }

        vector<vector<string>> ans;
        for(auto i:m){
            ans.push_back(i.second);
        }
        return ans;
    }
};
