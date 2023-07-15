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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode * p=head;
        int count=1,n=1,index;
        while(p->next!=NULL){
            p=p->next;
            n++;
        }

        cout<<n<<endl;
        k=k%n;
         if(k==0){
            return head;
        }

        index=n-k;
        ListNode*q=head;
        ListNode*r=head->next;
        while(count!=index){
            q=q->next;
            r=r->next;
            count++;
        }
        q->next=NULL;
        p->next=head;

        return r;
    }
};