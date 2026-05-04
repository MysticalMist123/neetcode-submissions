class Solution {
public:
    bool canJump(vector<int>& nums) {
        int goal=nums.size()-1,e=nums.size()-2;
        while(e>=0){
            if(nums[e]+e>=goal){
                goal = e;
            }
            e--;
        }
        if(goal==0) return true;
        return false;
    }
};
