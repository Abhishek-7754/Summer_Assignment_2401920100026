#include<iostream>
#include<string>
#include<vector>
using namespace std;
int compressString(vector<char> &chars){
    int n=chars.size();
    int i=0;
    int index=0;
    while(i<n){
        char curr_char=chars[i];
       int count =0;
    
    while(i<n && curr_char==chars[i]){
        count++;
        i++;
    }
    chars[index]=curr_char;
    index++;
    if(count>1){
        string count_str=to_string(count);
        for(char c:count_str){
            chars[index]=c;
            index++;
        }
    }
    }
   return index;
}
int main(){
    int n;
    cout<<"enter the number of characters:";
    cin>>n;
    vector<char>chars(n);
    for(int i=0;i<n;i++){
        cout<<"enter character "<<i+1<<":";
        cin>>chars[i];
    }
    int new_length=compressString(chars);
    cout<<"Compressed string: ";
    for(int i=0;i<new_length;i++){
        cout<<chars[i]<<" ";
    }
    cout<<endl;
     return 0;
}