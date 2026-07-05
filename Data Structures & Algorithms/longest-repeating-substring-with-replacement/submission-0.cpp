class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int ans =0;
        int left =0;
        int maxF =0;
       int n = s.size();

        unordered_map<char, int> mp;

        for (int right =0; right<n; right++){

            mp[s[right]]++;
            maxF = max (maxF, mp[s[right]]);

            while ((right-left +1) - maxF > k){
                    mp[s[left]]--;
                    left++;
            }

            ans = max(ans, right-left+1);
        }
        return ans;
    }
};
