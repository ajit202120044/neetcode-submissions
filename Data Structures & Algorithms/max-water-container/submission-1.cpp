class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        //sort(heights.begin(), heights.end());
         
        int ans = INT_MIN;
         int i =0, n = heights.size();
         int j = heights.size()-1;

         while(i<j){

                int minHeight = min(heights[i], heights[j]);
                int tempAns = minHeight * (j-i);
                ans = max(ans,tempAns);
                if (heights[i] < heights[j]) i++;
                else j--;


         }


        return ans;
    }
};
