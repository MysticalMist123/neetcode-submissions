class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> indexOf;
        for(int i=0;i<nums.size();i++){
            indexOf[nums[i]] = i+1;
        }

        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(indexOf[target-nums[i]] && indexOf[target-nums[i]]-1!=i){
                ans.push_back(i);
                ans.push_back(indexOf[target-nums[i]]-1);
                return ans;
            }
        }
        return ans;
    }
};
