#include<iostream>
#include<stack>

using namespace std;
bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
          char ch=s[i];
          if(s[i]=='['||s[i]=='{'||s[i]=='('){
            st.push(ch);
          }
          else{
            if(st.size()==0){
            return false;
          }
          if(st.top()=='{' && s[i]=='}' || st.top()=='(' && s[i]==')' || st.top()=='[' && s[i]==']'){
            st.pop();
          }
          else{
            return false;
          }
        }
        }
        return st.size() == 0;
    }
    int main(){
    string s;
    cout<<"enter string of parenthesis: ";
    cin>> s;
    if(isValid(s)) {
        cout<<"valid"<<endl;

    }
    else{
        cout<<"not";
    }
    return 0;
    }
