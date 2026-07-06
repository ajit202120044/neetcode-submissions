class Solution {
public:
    string minWindow(string s, string t) {
        
       // string ans ="";
         int left =0;

        unordered_map<char, int> mpT;
        unordered_map<char,int> mpS;
        int n = s.size();

        for (auto it : t){
            mpT[it]++;
        }

     int formed =0;
     int tempAns = INT_MAX;
     int start =0;
        for ( int right =0; right < n; right ++){
                mpS[s[right]]++;
               if (mpT.count(s[right]) and mpT[s[right]] == mpS[s[right]]){
                formed++;
               }

                while(formed == mpT.size()){
                       if (tempAns > right-left+1){
                        tempAns = right-left +1;
                        start = left;
                       }

                       mpS[s[left]]--;

                       if (mpT.count(s[left]) and mpS[s[left]] < mpT[s[left]]){
                        formed--;
                       }

                       left++;

                }

        }
        if (tempAns == INT_MAX)
            return "";

        return s.substr(start, tempAns);
    }
};
