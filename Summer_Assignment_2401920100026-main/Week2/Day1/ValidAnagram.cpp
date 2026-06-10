#include <iostream>
#include <string>
using namespace std;
bool isAnagram(string s, string t) {
      if(s.size()!= t.size()) return false;
      int arr[26] = {0};

      for(int i=0; i<s.size();i++){
        arr[s[i]-'a']++;
        arr[t[i]-'a']--;
      }
      for(int check: arr){
        if(check!=0) return false;

      }
       return true; 
    }

int main() {
    string s, t;
cout << "Enter the first string: ";
    cin >> s;
cout << "Enter the second string: ";
    cin >> t;
if (isAnagram(s, t)) {
        cout << "anagrams" << endl;
    } else {
        cout << "not anagrams" << endl;
    }

    return 0;
}
   