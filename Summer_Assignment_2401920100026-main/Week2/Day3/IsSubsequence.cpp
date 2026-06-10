#include<iostream>
#include<string>
using namespace std;
bool isSubsequence(string s, string t) {
      int i = 0, j = 0;
     while (i < s.size() && j < t.size()) {
    if (s[i] == t[j]) {
            i++;
        }
        j++;
    }

    return i == s.size();
}
int main() {
    string s, t;
    cout<<"Enter the first string: ";
    cin>>s;
    cout<<"Enter the second string: ";
    cin>>t;

    if(isSubsequence(s,t)) {
    cout<<"subsequence of the second string"<<endl;
    } else{
    cout<<"not a subsequence of the second string"<<endl;
    }

    return 0;
}