class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()==1) return 0;
        int l=0,r=0;
        int c=0;
        while(l<nums.size() && r<nums.size()-1){
            cout<<l<<" "<<r<<"\n";
            int b_index=l;
            for(int i=l;i<=r;i++){
                if(i+nums[i]>b_index){
                    b_index = i+nums[i];
                }
            }
            l=r+1;
            r=b_index;
            c++;
        }
        return c;
    }
};
