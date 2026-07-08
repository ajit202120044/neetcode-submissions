class MinStack {
public:
     stack<int> st;
     stack<int> minS;
   

    MinStack() {
     
            }
    void push(int val) {
     
       st.push(val);
       if(minS.empty() or minS.top()>=val){
        minS.push(val);
       }


    }
    
    void pop() {
     if(!st.empty()){
        if(!minS.empty()) {
        if(st.top() == minS.top()){
            st.pop();
            minS.pop();
        }else {
            st.pop();
        }
        }
     }

    }
    
    int top() {
        if(!st.empty()){
            return st.top();
        }

        return 0;
        
    }
    
    int getMin() {
        
    
        return minS.top();
        
    }
};
