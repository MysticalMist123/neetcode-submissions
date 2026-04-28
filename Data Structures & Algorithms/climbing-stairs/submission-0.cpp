class Solution {
public:
    int climbStairs(int n) {
        int a=0, b=1;
        for(int i=1;i<n+1;i++){
            int t = a;
            a = b;
            b = t+b;
        }
        return b;
    }
};
