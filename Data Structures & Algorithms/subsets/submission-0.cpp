class Solution {
    void fill_ss(int index, vector<int> curr, vector<int>& nums, vector<vector<int>>& ans){
        for(int i=index;i<nums.size();i++){
            curr.push_back(nums[i]);
            ans.push_back(curr);
            fill_ss(i+1, curr, nums, ans);
            curr.pop_back();
        }
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        ans.push_back(curr);
        fill_ss(0, curr, nums, ans);
        return ans;
    }
};
