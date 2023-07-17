class MinStack {
public:
    stack<pair<int,int>>s;
    int min=INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.size()==0){
            min=val;
        }
        else{
            if(val<min){
                min=val;
            }
        }
        s.push({val,min});
    }
    
    void pop() {
        int x=s.top().second;
        s.pop();
        if(s.size()==0){
            min=INT_MAX;
        }
        else{
            if(min==x){
                min=s.top().second;
            }
        }
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */