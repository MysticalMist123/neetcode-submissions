class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s=0, e=0;
        int sum = 0;
        int ans = INT_MIN;
        while(e<nums.size()){
            sum+=nums[e];
            if(sum>ans) ans = sum;
            if(sum<0) sum = 0;
            e++;
        }
        return ans;
    }
};
