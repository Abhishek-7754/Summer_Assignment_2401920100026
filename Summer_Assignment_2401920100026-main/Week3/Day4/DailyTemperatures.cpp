#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int>dailyTemp(vector<int>temperatures){
    int n=temperatures.size();
    stack<int>st;
    vector<int>result(n);
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && temperatures[i]>=temperatures[st.top()]){
            st.pop();
        }
        if(st.empty()){
            result[i]=0;
        }
        else{
            result[i]=st.top()-i;
        }
        st.push(i);
    }
    return result;
}
int main(){
    int n;
    cout<<"enter the value of n: "<<endl;
    cin>>n;
    vector<int> temperatures(n);
    cout<<"enter the temperatures: ";
    for(int i=0;i<n;i++){
        cin>>temperatures[i];
    }
        
    vector<int> res = dailyTemp(temperatures);
    for(int x: res) cout<<x<<" ";
    cout<<endl;
}