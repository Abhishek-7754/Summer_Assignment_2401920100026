#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
vector<vector<string>>groupAnagrams(vector<string>& strs){
    unordered_map<string,vector<string>>mp;
    for(string s:strs){
        string t=s;
        sort(t.begin(),t.end());
        mp[t].push_back(s);

    }
    vector<vector<string>>result;
    for(auto pair:mp){
        result.push_back(pair.second);
    }
    return result;
}
int main(){
    int n;
    cout<<"enter the number of strings:";
    cin>>n;
    vector<string>strs(n);
    for(int i=0;i<n;i++){
        cout<<"enter string "<<i+1<<":";
        cin>>strs[i];
    }
    vector<vector<string>>result=groupAnagrams(strs);
    for(const auto& group:result){
        for(const auto& s:group){
            cout<<s<<" ";
        }
        cout<<endl;
    }
    return 0;
}