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
    ListNode* swapNodes(ListNode* head, int k) {
        // Two Pointers and single pass 
        ListNode *dummy; // dummy node is used to make it like 1 based indexing 
        dummy = new ListNode(0);
        dummy->next = head;
        ListNode* ks = dummy;
        while(k> 0){
            ks = ks->next;
            k--;
        }
        ListNode *ke = ks , *second = dummy;
        while(ke!=NULL){
            second = second -> next;
            ke = ke->next;            
        }
        // now ke points to first node and dummy points to our second node 
        int temp = ks->val;
        ks->val = second->val;
        second->val = temp;
        delete  dummy;
        return head;
        
    }
};