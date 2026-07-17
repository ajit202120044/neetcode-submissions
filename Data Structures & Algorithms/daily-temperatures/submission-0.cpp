class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        
        int n = temp.size();
        vector<int> ans(n,0);
        stack<pair<int,int>> st;
        


        // loop 1=0 to i = temp n {
            // st.push({temp[i], i});
            //if (temp[i] > st.top().first() then ans.push_back(i - st.top().second));
            // 
            for ( int i =0; i< n; i++){

               

                while (!st.empty()  and temp[i] > st.top().first){

                    ans[st.top().second] = i - st.top().second;
                    st.pop();
                }
                 st.push({temp[i], i});
            }
    


        return ans ;
    }
};
