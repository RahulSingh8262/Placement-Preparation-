class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * head=new ListNode(0);
        ListNode * h=head;
        int sum=0;
        int carry=0;
        while(l1!=NULL || l2!=NULL){
            if(l1!=NULL){
                sum=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum=l2->val+sum;
                l2=l2->next;
            }
            sum=sum+carry;
            head->next=new ListNode(sum%10);
            carry=sum/10;
            head=head->next;
             sum=0;
        }

         if(carry!=0){
            sum=sum+carry;
            head->next=new ListNode(sum%10);
            carry=sum/10;
        } 

        return h->next;

    }
};