class MinStack {
    int s[100000];
    int t;
    int minS[100000];
public:
    MinStack() {
        t = -1;
    }
    
    void push(int val) {
        s[++t] = val;
        if(t<=0){
            minS[t] = val;
        }
        else{
            minS[t] = min(minS[t-1],val);
        }
    }
    
    void pop() {
        if(t!=-1){
            t--;
        }
    }
    
    int top() {
        return s[t];
    }
    
    int getMin() {
        return minS[t];
    }
};
