class MinStack {
    int s[10000000];
    int t;
public:
    MinStack() {
        t = -1;
    }
    
    void push(int val) {
        s[++t] = val;
    }
    
    void pop() {
        if(t!=-1)
            t--;
    }
    
    int top() {
        return s[t];
    }
    
    int getMin() {
        int m = INT_MAX;
        for(int i=0;i<=t;i++){
            m = min(m,s[i]);
        }
        return m;
    }
};
