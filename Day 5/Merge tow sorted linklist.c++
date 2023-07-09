class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * demo=new ListNode(-1);
        ListNode * head=demo;

        while(list1!=NULL && list2!=NULL){
            int x=list1->val;
            int y=list2->val;

            if(x<y){
                demo->next=list1;
                demo=demo->next;
                list1=list1->next;
            }
            else{
                 demo->next=list2;
                demo=demo->next;
                list2=list2->next;
            }

        }

        while(list1){
            demo->next=list1;
            list1=list1->next;
            demo=demo->next;
        }

        while(list2){
            demo->next=list2;
            list2=list2->next;
            demo=demo->next;
        }

        return head->next;
    }
};