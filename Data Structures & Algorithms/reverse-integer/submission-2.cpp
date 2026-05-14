class Solution {
public:
    int reverse(int x) {
        int sign = x<0?-1:1;
        if(sign==-1) x = -x;
        int ans = 0;
        while(x){
            cout<<ans<<" "<<INT_MAX<<"\n";
            if(ans<=INT_MAX/10) ans*=10;
            else return 0;
            if(ans<=INT_MAX-x%10) ans += x%10;
            else return 0;
            x=x/10;
        }
        return ans*sign;
    }
};
