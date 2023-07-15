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

 class compare{
     public:
     bool operator()(ListNode *a,ListNode *b){
         return a->val>b->val;
     }
 };
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*,vector<ListNode*>,compare>pq;

        //step 1 complete
        for(auto it:lists){
            if(it!=NULL){
                pq.push(it);
            }
        }

        //step 2

        ListNode * p=new ListNode(-1);
        ListNode *head=p;
        while(!pq.empty())
        {
            ListNode * temp=pq.top();
            pq.pop();
            p->next=temp;
            p=p->next;
            if(temp->next!=NULL){
                pq.push(temp->next);
            }
        }
        
        p->next=NULL;

        return head->next;
    }
};