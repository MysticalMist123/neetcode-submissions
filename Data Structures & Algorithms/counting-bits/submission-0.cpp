class Solution {
    int count(int num){
        int c=0;
        while(num>0){
            if(num & 1) c++;
            num=(num>>1);
        }
        return c;
    }
public:
    vector<int> countBits(int n) {
        vector<int> arr;
        for(int i=0;i<=n;i++){
            arr.push_back(count(i));
        }
        return arr;
    }
};
