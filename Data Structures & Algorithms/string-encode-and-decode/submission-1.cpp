class Solution {
public:

    string encode(vector<string>& strs) {
       string s = "";
       for (int i =0; i< strs.size(); i++){
        int n =strs[i].size();
        s = s + to_string(n);
        s= s+"@";
        s += strs[i];
       }
       return s;

    }

    vector<string> decode(string s) {
  vector<string> ans;
   for ( int i =0; i< s.size(); ){
     string temp =  "";
     string length = "";
     while(s[i] != '@') {
        length += s[i];
        i++;
    }
     int n = stoi(length);
    i++;
    while(n>0 and i<s.size()){
     temp += s[i];
     i++;
     n--;

    }
    ans.push_back(temp);
   // i = i+n;
    }
    
  return ans;
      
    }
};
