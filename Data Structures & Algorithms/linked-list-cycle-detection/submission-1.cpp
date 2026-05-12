/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    bool hasCycle(ListNode* head) {
        
         if(head->next==NULL)
        {
            return false;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        int flag=0;
        while(fast!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL)
            {
                fast=fast->next;
            }
            slow=slow->next;
            if(slow==fast)
            {
                flag=1;
                return true;
            }
           
        }
        if(flag==0)
        {
            return false;
        }
        
       
    }
};
