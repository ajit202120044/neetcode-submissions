class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
          int left =0;
          vector<int> ans;
          priority_queue<pair<int,int>> pq;
            int n = nums.size();
    
          for (int right = 0; right < n; right++){

                pq.push({nums[right], right});

                 if (right- left +1 > k){
                    left++;
                    while(pq.top().second < left){
                    pq.pop();
                    }
                    
                 }
                 if(right -left +1 == k ){
                    ans.push_back(pq.top().first);

                 }

          }
            return ans;
    }
};
