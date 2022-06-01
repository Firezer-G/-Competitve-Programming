#include<iostream>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    void deleteNode(ListNode* node) {
    	//deletes the node passed with out head
        ListNode *temp=node;
        ListNode *slow;
        while(temp->next!=NULL){
            temp->val=temp->next->val;
            slow=temp;
            temp=temp->next;
        }
        delete temp;
        slow->next=NULL;
    }
};
