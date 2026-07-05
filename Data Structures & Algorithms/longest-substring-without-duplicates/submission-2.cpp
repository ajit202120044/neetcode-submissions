class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        //varibal  sliding window question
        int ans =0;
        int left =0;
        int right;
        unordered_map<char,int> mp;
        for(right =0; right<s.size(); right++){
             //count of char insert in map
                 mp[s[right]]++;

                while(mp[s[right]]>1){  // invalid window

                    mp[s[left]]--;
                    if (mp[s[left]] == 0){
                        mp.erase(s[left]);
                    }
                    left++;

                }    
             ans = max(ans,right-left+1);
        }
        return ans;
    }
};
