class Solution {
public:
    int evalRPN(vector<string>& token) {

//["1","2","+","3","*","4","-"]
      // stack -   

      stack<int> st;

      for ( int i =0; i< token.size(); i++){

         if (token[i] == "+" or token[i] == "-" or token[i] == "/" or  token[i] =="*" ){

            
            int b = st.top(); st.pop();
             int a = st.top(); st.pop();
           
            if (token[i] == "-")st.push(a - b); 
            else if (token[i] == "+")st.push(a + b); 
            else  if (token[i] == "/")st.push(a / b); 
            else st.push(a * b); 
            

         }
         else {
            st.push(stoi(token[i]));
         }
      } 

      return st.top();
    }
};
