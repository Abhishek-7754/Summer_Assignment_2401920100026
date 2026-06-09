#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> findAnagrams(string s, string p) {
    int n1 = s.size();
    int n2 = p.size();

    vector<int> ans;

    if (n1 < n2)
        return ans;

    vector<int> freqP(26, 0);
    vector<int> freqS(26, 0);

    // First window
    for (int i = 0; i < n2; i++) {
        freqP[p[i] - 'a']++;
        freqS[s[i] - 'a']++;
    }

    if (freqP == freqS)
        ans.push_back(0);

    // Sliding window
    for (int i = n2; i < n1; i++) {
        freqS[s[i] - 'a']++;          // Add new character
        freqS[s[i - n2] - 'a']--;     // Remove old character

        if (freqP == freqS)
            ans.push_back(i - n2 + 1);
    }

    return ans;
}

int main() {
    string s, p;

    cout << "Enter the string: ";
    cin >> s;

    cout << "Enter the pattern: ";
    cin >> p;

    vector<int> result = findAnagrams(s, p);

    if (result.empty()) {
        cout << "No anagrams found.\n";
    } else {
        cout << "Anagrams found at indices: ";
        for (int idx : result) {
            cout << idx << " ";
        }
        cout << endl;
    }

    return 0;
}