class MinStack {
public:
    /** initialize your data structure here. */
    
    vector<int> ans ;
    vector<int> min ;
    
    
    MinStack() {
        
    }
    
    void push(int val) {
        ans.push_back( val );
        if ( min.empty() ) min.push_back( val ) ;
        else if ( val <= min.back() ) min.push_back( val ) ;
        else min.push_back( min.back() ) ;
        
    }
    
    void pop() {
        min.pop_back();
        ans.pop_back();

    }
    
    int top() {
        return ans.back();
        
    }
    
    int getMin() {
        return min.back();
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
