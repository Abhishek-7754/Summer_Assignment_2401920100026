#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

class MinStack {
private:
    stack<pair<int, int>> s;

public:
    MinStack() {
    }

    void push(int val) {
        if (s.empty()) {
            s.push({val, val});
        } else {
            int minVal = min(val, s.top().second);
            s.push({val, minVal});
        }
    }

    void pop() {
        if (!s.empty()) {
            s.pop();
        }
    }

    int top() {
        return s.top().first;
    }

    int getMin() {
        return s.top().second;
    }
};