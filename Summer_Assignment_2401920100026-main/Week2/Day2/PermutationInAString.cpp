#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool permutationinstring(string s1, string s2){
    int n=s1.size();
    int m=s2.size();
    if(n>m) return false;
    vector<int>arr1(26,0);
    vector<int>arr2(26,0);
    for(char ch: s1){
        arr1[ch-'a']++;

    }
    int left=0;
    int right=0;
    while(right<m){
        arr2[s2[right]-'a']++;
        if(right-left+1>n){
            arr2[s2[left]-'a']--;
            left++;
        }
        if(arr1==arr2) return true;
        right++;
    }
    return false;
}
int main(){
    string s1, s2;
    cout<<"enter the string1";
    cin>>s1;
    cout<<"enter the string2";
    cin>>s2;
    cout<<(permutationinstring(s1,s2)?true:false);
    return 0;
}