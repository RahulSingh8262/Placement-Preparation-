class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int max_length=0,left,right,length=0,l_final=-1,r_final=-1;
        for(int i=0;i<n;i++){
            //odd string
            left=right=i;
            while(left>=0 && right<=n-1 && s[left]==s[right]){
                length=right-left+1;
                if(length>max_length){
                    l_final=left;
                    r_final=right;
                    max_length=length;
                }
                left--;
                right++;
            }

           //even string
            
            left=i;
            right=i+1;
            while(left>=0 && right<=n-1 && s[left]==s[right]){
                length=right-left+1;
                 if(length>max_length){
                    l_final=left;
                    r_final=right;
                    max_length=length;
                }
                left--;
                right++;
            }

        }
        string ans="";
        for(int i=l_final;i<=r_final;i++){
            ans=ans+s[i];
        }
        return ans;
    }
};