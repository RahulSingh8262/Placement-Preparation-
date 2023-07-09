class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL){
            return NULL;
        }
        int size=1;
        ListNode * p=head;
        while(p!=NULL){
            p=p->next;
            size++;
        }
        int postion=size-n;
       
        if(postion==1){
            return head->next;
        }
        int count=1;
        
        ListNode *q=head;
        while(count!=postion){
            count++;
            p=q;
            q=q->next;
        }
        p->next=q->next;
        return head;
    }
};