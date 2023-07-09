

/* Node structure  used in the program

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

/*  Function which returns the  root of 
    the flattened linked list. */
    
    Node * merge(Node *l1,Node *l2){
    Node * demo=new Node(0);
    Node * head=demo;
    while(l1!=NULL && l2!=NULL){
        if(l1->data<l2->data){
            demo->bottom=l1;
            l1=l1->bottom;
            demo=demo->bottom;
        }
        else{
            demo->bottom=l2;
            l2=l2->bottom;
            demo=demo->bottom;
        }
    }
    if(l1!=NULL){
        demo->bottom=l1;
    }
    else{
        demo->bottom=l2;
    }
    return head->bottom;
}
Node *flatten(Node *root)
{
  if(root==NULL || root->next==NULL){
      return root;
  }
  
  Node *l1=root;
  Node *l2=flatten(root->next);
  root->next=l2;
  
  return merge(root,root->next);
}

