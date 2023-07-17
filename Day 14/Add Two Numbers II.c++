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
        if(head==NULL || head->next==NULL) return head;

        ListNode *prev=NULL;
        ListNode * p=head;
        ListNode * q=head->next;

        while(q){
            p->next=prev;
            prev=p;
            p=q;
            q=q->next;
        }
        p->next=prev;
        return p;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverse(l1);
        l2=reverse(l2);
        ListNode * demo=new ListNode(-1);
        ListNode * ans=demo;
        int carry=0;
        while(l1!=NULL || l2!=NULL){
            int x=l1?l1->val:0;
            int y=l2?l2->val:0;
            int val=x+y+carry;
            demo->next=new ListNode(val%10);
            demo=demo->next;
            carry=val/10;
            if(l1) l1=l1->next;
            if(l2) l2=l2->next;
        }

        if(carry!=0){
            demo->next=new ListNode(carry);
            demo=demo->next;
        }

        ans=reverse(ans->next);
        return ans;
    }
};