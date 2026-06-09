#include<iostream>
#include<string>
#include<vector>
using namespace std;
int longestsubstring(string s){
    vector<int> hash(256,-1);
    int left=0;
    int right=0;
    int maxlen=0;
    for(right=0;right<s.size();right++){
    
        if(hash[s[right]]>=left){
            left=(hash[s[right]]+1);
        }
        int len=right-left+1;
        maxlen=max(maxlen,len);
        hash[s[right]]=right;
    }

    return maxlen;
}
int main(){
    string s;
    cout<<"enter the string";
    cin>>s;
    cout<<"the longest substring without repeating character is "<<longestsubstring(s)<<endl;
    return 0;
}
