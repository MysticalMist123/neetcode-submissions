class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> arr;
        for(int i:stones){
            arr.push(i);
        }
        for(int i=0;i<stones.size()-1;i++){
            int f,s;
            f=arr.top();
            arr.pop();
            s=arr.top();
            arr.pop();
            arr.push(abs(f-s));
        }
        return arr.top();
    }
};
