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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Step 1: Find the size of the linked list
        ListNode* temp = head;
        int size = 1;  // Start with 1 because head is already counted
        while (temp->next != NULL) {
            temp = temp->next;
            size++;
        }

        // Step 2: Calculate the position of the node to remove from the start
        int newN = size + 1 - n;
        
        // Special case: if we need to remove the head (first node)
        if (newN == 1) {
            ListNode* newHead = head->next;
            delete head;  // Don't forget to delete the old head
            return newHead;  // Return the new head
        }

        // Step 3: Traverse to the node just before the one to remove
        ListNode* curr = head;
        ListNode* prev = NULL;
        for (int i = 1; i < newN; i++) {
            prev = curr;
            curr = curr->next;
        }

        // Step 4: Remove the nth node
        prev->next = curr->next;
        
        // Clean up and delete the node
        delete curr;

        return head;  // Return the head of the updated list
    }
};
