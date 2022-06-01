#include<iostream>
#include<vector>
using namespace std;
  struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> values;
        ListNode* temp=head;
        while(temp!=NULL){
            values.push_back(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL){
            temp->val=*(values.end()-1);
            values.pop_back();
            temp=temp->next;
        }
        return head;
    }
};
