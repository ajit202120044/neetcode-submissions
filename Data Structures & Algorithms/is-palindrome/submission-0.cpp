class Solution {
public:

    string helper(string &s){
         string ans;
        for (auto it : s){
            if (isalnum(it)){
                ans += tolower(it);
            }
        }
        return ans;
    }
    bool isPalindrome(string s) {
           string alum = helper(s);
           int n = alum.size();
          int i =0;
           int j = n-1;
           bool ans;
        while(i<=j){
            if (alum[i] == alum[j]){
                ans = true;
                i++;
                j--;
            }
            else return false;
        }
    return ans;
        
    }
};
