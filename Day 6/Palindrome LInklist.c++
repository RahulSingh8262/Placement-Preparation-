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

    ListNode * reverse(ListNode * head){
        if(head==NULL || head->next==NULL){
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
    bool isPalindrome(ListNode* head) {
        ListNode *p=head;
        ListNode * q=head;
        while(q->next && q->next->next){
            p=p->next;
            q=q->next->next;
        }
        p->next=reverse(p->next);
         p=p->next;
       /*  while(p!=NULL){
            cout<<p->val<<endl;
            p=p->next;
        } */
     
        ListNode * demo=head;
        while(p!=NULL){
            if(p->val!=demo->val){
                return 0;
            }
            p=p->next;
            demo=demo->next;
        } 
        return 1;
    }
};