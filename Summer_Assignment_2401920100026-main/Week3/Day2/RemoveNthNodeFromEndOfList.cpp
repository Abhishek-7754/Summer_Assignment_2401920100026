#include<iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x){
        val=x;
        next=NULL;

    }
};
ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp1 = head, *temp2= head;
        for (int i = 0; i < n; i++) 
        temp1 = temp1->next;
        
        if (!temp1) return head->next;
        
        while (temp1->next) {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        temp2->next = temp2->next->next;
        return head;
    }
void printList(ListNode* head) {
    ListNode* cur = head;
    while (cur) {
        cout << cur->val;
        if (cur->next) cout << " -> ";
        cur = cur->next;
    }
    cout << endl;
}

int main(){
    ListNode* head=new ListNode(1);
    ListNode* node2=new ListNode(2);
    ListNode* node3=new ListNode(3);
    ListNode* node4=new ListNode(4);
    head->next=node2;
    node2->next=node3;
    node3->next=node4;
    int n=3;
    cout << "Original List: ";
    printList(head);

    head = removeNthFromEnd(head, n);

    cout << "After removing " << n << "rd node from end: ";
    printList(head);

    
    
    return 0;
}