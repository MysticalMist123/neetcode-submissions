class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> isPresent;
        for(int i:nums){
            isPresent[i] = 1;
        }
        vector<int> starts;
        for(int i:nums){
            if(!isPresent[i-1]){
                starts.push_back(i);
            }
        }

        int maxLen = 0;
        for(int i:starts){
            int len = 0;
            int c = i;
            while(1){
                if(isPresent[c]){
                    len++;
                    c++;
                }
                else{
                    maxLen = max(maxLen,len);
                    break;
                }
            }
        }
        return maxLen;
    }
};
