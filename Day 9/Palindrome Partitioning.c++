class Solution {
public:

    void solve(string &s,vector<string>&temp,vector<vector<string>>&ans,int index){
        if(index==s.size()){
            ans.push_back(temp);
            return;
        }

        for(int i=index;i<s.size();i++){
            if(palindrome(index,i,s)){
                temp.push_back(s.substr(index,i-index+1));
                solve(s,temp,ans,i+1);
                temp.pop_back();
            }
        }
    }

    bool palindrome(int start,int end,string &s){
        while(start<=end){
            if(s[start]!=s[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>temp;
        solve(s,temp,ans,0);
        return ans;
    }
};
