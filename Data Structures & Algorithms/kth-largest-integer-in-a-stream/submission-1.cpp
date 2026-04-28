class KthLargest {
    priority_queue<int> pq;
    int n;
public:
    KthLargest(int k, vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        n = k;
    }
    
    int add(int val) {
        pq.push(val);
        vector<int> temp;
        for(int i=0;i<n-1;i++){
            temp.push_back(pq.top());
            pq.pop();
        }
        int ans = pq.top();
        for(int i=0;i<n-1;i++){
            pq.push(temp[i]);
        }
        return ans;
    }
};
