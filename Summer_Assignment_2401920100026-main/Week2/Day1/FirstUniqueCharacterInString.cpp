#include <iostream>
#include <string>
using namespace std;
int firstuniquechar(string s){
    int arr[26]={0};
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        arr[ch-'a']++;
    }
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        if(arr[ch-'a']==1){
            return i;
        }
    }
    return -1;
}
int main(){
    string s;
    cout<<"Enter the string:";
cin>>s;
int index=firstuniquechar(s);
if(index!=-1){
    cout<<"The first unique character is at index: "<<index<<endl;
}
else{
    cout<<"No unique character found."<<endl;
}
return 0;
}