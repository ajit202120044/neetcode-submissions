class Solution {
public:
    int trap(vector<int>& height) {
        
        int area =0;
        //leftMax = 0,2,2,3,3,3,3,3,3,3
        // rightMax = 1,2,3,3,3,3,3,3,3

        // height[] = 0,2,0,3,1,0,1,3,2,1

        // water = min(leftMax, rightMax) - height[i];
          // if (water> 0){ then add since its area}
                    // step 1 : min(0,1)-1 = 0-1  =-1 no addition
                    //step3 : min(2,3)-0 2-0 = 2

        const int n = height.size();
        vector<int> leftMax(n);
         vector<int> rightMax(n);
         int tempLeftMax = INT_MIN;
         int tempRightMax = INT_MIN;
           for ( int i =0; i< n; i++){
                tempLeftMax = max(tempLeftMax, height[i]);
                leftMax[i] = tempLeftMax;
           }

           for ( int i =n-1; i>=0; i--){
               tempRightMax = max(tempRightMax, height[i]);
                rightMax[i] = tempRightMax;
           }

           for ( int i =0; i< n; i++){
              int water = min(leftMax[i], rightMax[i]) - height[i];
              if (water >0){
                area += water;
              }
           }




        return area;

    }
};
