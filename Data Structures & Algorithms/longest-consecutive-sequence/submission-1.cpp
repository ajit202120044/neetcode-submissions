class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        map<int, bool> mp;

        for (auto it : nums) {
            mp[it] = true;
        }
        int longest =0;
        for ( int i=0; i<nums.size(); i++){
            if (mp.find(nums[i]-1) == mp.end()) {
                int lenght =0;
                while(mp.find(nums[i] + lenght) != mp.end() ){
                        lenght ++;
                        longest = max(longest, lenght);

                }

            }
            
            }
            return longest;
    }
};
