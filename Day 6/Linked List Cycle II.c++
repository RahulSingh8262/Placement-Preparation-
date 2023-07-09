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
        
        ListNode *p=head;
        ListNode *q=head;
        int count=0;
        while(q!=NULL && q->next!=NULL){
            p=p->next;
            q=q->next->next;
            if(p==q){
                p=head;
                    break;
                }
            }
       

        while(q!=NULL && q->next!=NULL){
             if(p==q){
                    return q;
                }
            p=p->next;
            q=q->next;
            }
       
        return NULL;
       
        
    }
};