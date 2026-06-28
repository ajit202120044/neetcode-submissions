class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> ans;
        int n = nums.size();
        int multi =1;
         for (int i =0; i< n; i++){
            ans.push_back(multi);
            multi *= nums[i];
 
         }


         // ans - 1,1,2,8 = left
         // right = 
          // nums = 1,2,4,6
          // final ans = 48,
        int right =1;
        for ( int i =n-1; i>=0; i--){
            ans[i] = right*ans[i];
            right *= nums[i];
        }

        return ans;
    }
    
};
