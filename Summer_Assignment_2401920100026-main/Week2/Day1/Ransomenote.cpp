#include<iostream>
#include<string>
using namespace std;
bool canconstruct(string ransomnote,string magazine){
    if(ransomnote.size()>magazine.size()) return false;
    int arr[26]={0};
    for(char ch: magazine){
        arr[ch-'a']++;

    }
    for(char ch:ransomnote){
        if(--arr[ch-'a']<0){
            return false;
        }
    }
    return true;
}
int main(){
    string ransomnote,magazine;
    cout<<"enter magazine string";
    cin>>magazine;
    cout<<"enter ransomnote string";
    cin>>ransomnote;
    cout << (canconstruct(ransomnote, magazine) ? "true" : "false");
    return 0;
}