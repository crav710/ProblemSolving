/*
geeksy :: 

*/
class Solution {
public:
    ListNode* reverseList(ListNode* head)
    {
        ListNode* prev,*curr,*nNext;
        prev=NULL;
        curr= head;
        while(curr!=NULL)
        {
            nNext = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nNext;            
        }       
        return prev;
    }
};