/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node * demo=new Node(-1);
        Node * head1=demo;

        map<Node *,Node *>mp;

        Node * p=head;
        while(p){
            Node * q=new Node(p->val);
            mp[p]=q;
            demo->next=q;
            p=p->next;
            demo=demo->next;
        }

        p=head;
        Node * q=head1->next;

        while(p){
            q->random=mp[p->random];
            q=q->next;
            p=p->next;
        }

        return head1->next;
        
    }
};