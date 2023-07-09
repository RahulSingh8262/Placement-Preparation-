class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode * p=node;
        ListNode *q=node->next;
        while(q->next!=NULL){
            p->val=q->val;
            p=p->next;
            q=q->next;
        }
        p->val=q->val;
        p->next=NULL;
    }
};