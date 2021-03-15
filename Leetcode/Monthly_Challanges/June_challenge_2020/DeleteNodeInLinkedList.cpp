/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/*

Copy the data of next node to the delete node and unlink the next node with deleted node.
Link the next to next node with the modified deleted node.

*/
class Solution {
public:
    void deleteNode(ListNode* node) 
    {
        ListNode* tmpNode=node->next;
        
        node->val=tmpNode->val;
        
        node->next=tmpNode->next;
        
        delete tmpNode;
        
    }
};