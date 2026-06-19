#include <iostream>
#include <stack>
using namespace std;

class Queue {
    stack<int> s1, s2;

public:
    void enqueue(int x) {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(x);

        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    void dequeue() {
        if (s1.empty()) {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Deleted: " << s1.top() << endl;
        s1.pop();
    }

    void front() {
        if (s1.empty()) {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Front element: " << s1.top() << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.front();

    q.dequeue();
    q.front();

    return 0;
}