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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL){
            return NULL;
        }
        ListNode *p=headA;
        ListNode *q=headB;
        while(headA!=headB){
            if(headA==NULL){
                headA=q;
            }
            else{
                 headA=headA->next;
            }
            if(headB==NULL){
                headB=p;
            }
            else{
            headB=headB->next;}
        }
        return headA;
    }
};