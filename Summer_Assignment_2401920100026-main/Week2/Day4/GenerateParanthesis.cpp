#include<iostream>
#include<string>
#include<vector>
using namespace std;    
vector<string>result;
bool IsValid(string &str){
    int count=0;
    for(char &ch:str){
        if(ch=='('){
        count++;
        }
        else{
            count--;
            if(count<0)
            return false;
        }
    }
    return count==0;
}
void solve(string &curr,int n){
    if(curr.size()==2*n){
        if(IsValid(curr)){
        result.push_back(curr);
    }
    return;
}
curr.push_back('(');
solve(curr,n);
curr.pop_back();
curr.push_back(')');
solve(curr,n);
curr.pop_back();
}
    vector<string> generateParenthesis(int n) {
        string str="";
        solve(str,n);
        return result;
        
    }
    int main() {
        int n;
        cout<<"Enter the number of pairs of parentheses: ";
        cin>>n;
        vector<string> result = generateParenthesis(n);
        cout<<"Generated parentheses combinations: "<<endl;
        for(const string &combination : result) {
            cout<<combination<<endl;
        }
        return 0;
    }