#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
string reverseWords(string s) {
        int start=0;
        for(int i=0;i<=s.size();i++){
            if(s[i]==' ' || i==s.size()){
                reverse(s.begin()+start,s.begin()+i);
                start=i+1;
            }
        }
        return s;
    }
    int main() {
        string s;
        cout<<"Enter the string";
        getline(cin, s);
        string result = reverseWords(s);
        cout<<"Reversed words in the string: "<<result<<endl;

        return 0;
    }