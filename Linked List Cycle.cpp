#include<iostream>
using namespace std;
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL)
            return false;
        
        ListNode *fast = head;
        ListNode *slow = head;

        while(fast != NULL && fast ->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
          //if the fast and slow end up on the same place then there is a loop
            if(fast == slow)
                return true;
        }
        return false;
    }
};
