/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next == NULL)
            return head;
        ListNode* slow= head;
        ListNode* fast  =head;
        while(fast!=NULL && fast->next !=NULL)
        {
            slow= slow->next;
            fast = fast->next->next;
            if(slow==fast) break;
        }
 
       if(slow!=fast)                   // If there is no loop then return NULL
            return 0;                                                     
        slow=head;
        while(slow!=fast)          // Loop removal concept
        {
            slow=slow->next;
            fast=fast->next;
        }
        return fast; 
    }
};