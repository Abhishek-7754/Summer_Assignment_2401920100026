class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        sort(strs.begin(),strs.end());
        string first=strs[0];
        string last=strs[strs.size()-1];
        string ans="";
        int minlength=min(first.size(),last.size());
        for(int i=0;i<minlength;i++){
        if(first[i]!=last[i])
            break;
           ans=first.substr(0,i+1);    //ans+=first[i];
        }
return ans;
        
    }
};
