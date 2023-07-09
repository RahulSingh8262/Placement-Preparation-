class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL){
            return head;
        }
        ListNode * prev=NULL;
        ListNode *p=head;
        ListNode *q=head->next;
        
        while(q!=NULL){
            p->next=prev;
            prev=p;
            p=q;
            q=q->next;
        }
        p->next=prev;
        return p;
    }
};