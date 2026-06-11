#include<iostream>
#include<string>
#include<stack>
using namespace std;    
string decodeString(string s) {
         stack<int> countStack;
        stack<string> stringStack;
        string curr = "";
        int num = 0;
            for(char ch : s) {
            if(isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }
            else if(ch == '[') {
                countStack.push(num);
                stringStack.push(curr);
                num = 0;
                curr = "";
            }
            else if(ch == ']') {
                int repeat = countStack.top();
                countStack.pop();
                string prev = stringStack.top();
                stringStack.pop();
                string temp = "";
                while(repeat--) {
                    temp += curr;
                }
                curr = prev + temp;
            }
            else {
                curr += ch;
            }
        }
        return curr;
    }
    int main() {
        string s;
        cout<<"Enter the encoded string: ";
        cin>>s;
        string result = decodeString(s);
        cout<<"Decoded string: "<<result<<endl;
         return 0;
    }