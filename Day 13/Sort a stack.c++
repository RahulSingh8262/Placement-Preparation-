

/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */

void insert(stack<int>&s,int x){
    if(s.empty()){
        s.push(x);
        return;
    }
    if(x>=s.top()){
        s.push(x);
        return;
    }
    
    int y=s.top();
    s.pop();
    insert(s,x);
    s.push(y);
    
}


void solve(stack<int>&s){
    if(s.empty()){
        return;
    }
    int x=s.top();
    s.pop();
    solve(s);
    
    insert(s,x);
}

void SortedStack :: sort()
{
   solve(s);
   
}
