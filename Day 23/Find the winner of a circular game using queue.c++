class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> q;
        for(int i=1;i<=n;i++){
            q.push(i);
        }
        // 1 2 3 4 5 
        while(q.size() != 1){
            int i = 1;
            while(i < k){
                int f = q.front();
                q.pop();
                q.push(f);
                i++;
            }
            q.pop();
        }

        return q.front();
    }
};