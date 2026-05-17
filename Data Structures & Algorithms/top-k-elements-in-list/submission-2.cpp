class Solution {

    static bool comp(vector<int> a, vector<int> b){
        return a[1]>b[1];
    }

public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    
        unordered_map<int,int> m;
        for(int i:nums){
            m[i]++;
        }
        vector<vector<int>> freq;
        for(auto i:m){
            vector<int> t{i.first,i.second};
            freq.push_back(t);
        }
        sort(freq.begin(),freq.end(),comp);

        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(freq[i][0]);
        }
        return ans;
    }
};
