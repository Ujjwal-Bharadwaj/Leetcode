class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        sort(strs.begin(),strs.end());  
        string a=strs[0];
        string b=strs[strs.size()-1];
        string ans="";
        for(int i=0;i<min(a.length(),b.length());i++){
            if(a[i]==b[i]){
                ans.push_back(a[i]);
            }
            else{
                break;
            }
        } 
        return ans;
    }
};