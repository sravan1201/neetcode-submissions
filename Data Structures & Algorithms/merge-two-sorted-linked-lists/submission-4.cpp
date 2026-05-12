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
    // Helper function to merge two sorted lists
    ListNode* solve(ListNode* list1, ListNode* list2) {
        ListNode* curr1 = list1;
        ListNode* next1 = list1->next;
        ListNode* curr2 = list2;
        if(next1==NULL)
        {
            curr1->next=curr2;
            return list1;
        }

        while (curr2 != NULL && next1 != NULL) {
            if (curr1->val <= curr2->val && curr2->val <= next1->val) {
                // Insert curr2 between curr1 and next1
                curr1->next = curr2;
                ListNode* next2 = curr2->next;
                curr2->next = next1;
                // Move curr1 and curr2 ahead
                curr1 = curr2;
                curr2 = next2;
            } else {
                // Move curr1 and next1 ahead
                curr1 = next1;
                next1 = next1->next;
                // If next1 reaches NULL, attach remaining list2 nodes
                if (next1 == NULL) {
                    curr1->next = curr2;
                    return list1;
                }
            }
        }
        return list1;
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL) {
            return list2;
        } else if (list2 == NULL) {
            return list1;
        }

        // Ensure list1 always has the smaller starting value
        if (list1->val <= list2->val) {
            return solve(list1, list2);
        } else {
            return solve(list2, list1);
        }
    }
};
