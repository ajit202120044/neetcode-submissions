class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
        int k = s1.size();
        int left =0;

        vector<int> freq(26, 0);
        vector<int> windowS2(26, 0);

        for ( int i =0;i< s1.size(); i++)
        {
          freq[s1[i]-'a']++;
        }
       for (int right = 0; right < s2.size(); right++) {

            windowS2[s2[right] - 'a']++;
        
            if (right-left +1 > k){
                windowS2[s2[left]-'a']--;
                    left++;
                    

            }
            if (right-left +1 == k){
                    if (freq == windowS2) return true;
            }
        }
        return false;
    }
};
