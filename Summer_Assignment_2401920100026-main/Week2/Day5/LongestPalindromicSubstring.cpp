#include<iostream>
#include<string>
#include<vector>

using namespace std;
 string longestPalindrome(string s) {
         int n = s.size();
        string res = "";
        for(int i=0;i<n;i++){
            int st=i,end=i;
            while(st>=0&&end<n&&s[st]==s[end]){
            st--;
        end++;
            }
            string temp=s.substr(st+1,end-st-1);
            if(temp.size()>res.size())res=temp;
            st=i;
            end=i+1;
            while(st>=0&&end<n&&s[st]==s[end]){
                st--;
                end++;
            }
            temp=s.substr(st+1,end-st-1);
            if(temp.size()>res.size())res=temp;
        }

        return res;
    }
    int main(){
        string s;
        cout<<"enter the string:";
        cin>>s;
        string result=longestPalindrome(s);
        cout<<"Longest palindromic substring: "<<result<<endl;
         return 0;
    }