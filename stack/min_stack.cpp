class MinStack {
public:
    stack<int> main_stack, min_stack;
    MinStack() {
        
    }
    
    void push(int value) {
        if (main_stack.empty() || value <= min_stack.top()){
            min_stack.push(value);
        }
        main_stack.push(value);
    }
    
    void pop() {
        if (main_stack.top() == min_stack.top()){
            min_stack.pop();
        }
        main_stack.pop();
    }
    
    int top() {
        return main_stack.top(); 
    }
    
    int getMin() {
        return min_stack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

 class MinStack{
    public: 
    stack<int> min_stack;
stack<int> main_stack;
    MinStack() {
    }
    
    void push(int val) {
        main_stack.push(val);
        if(min_stack.empty()){
            min_stack.push(val);
        }else{
            min_stack.push(min(val, min_stack.top()));
        }
    }
    
    void pop() {
        main_stack.pop();
        min_stack.pop();
    }
    
    int top() {
      return  main_stack.top();
    }
    
    int getMin() {
        return min_stack.top();
    }
};
