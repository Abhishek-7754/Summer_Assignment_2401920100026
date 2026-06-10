#include<iostream>
#include<string>
using namespace std;
int strStr(string s1,string s2){
    int m= s1.size();
    int n=s2.size();
    for(int i=0;i<=m-n;i++){
        for(int j=0;j<n;j++){
            if(s1[i+j]!=s2[j]){
                break;
            }
            if(j==n-1){
                return i;
            }
            }
        }
        return -1;
    }
    int main(){
        string s1,s2;
        cout<<"enter the string 1: ";
        cin>>s1;
        cout<< "enter the string 2:";
        cin>>s2;
        int result=strStr(s1,s2);
        if(result==-1){
            cout<<"not found"<<endl;
        }
        else{
            cout<<"found at index: "<<result<<endl;

        }
        }
    
