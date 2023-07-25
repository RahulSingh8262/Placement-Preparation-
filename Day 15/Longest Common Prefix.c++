class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        for(int i=0;i<strs[0].size();i++){
            char ch=strs[0][i];
            bool val=true;
            int j=0;
            for( j=1;j<strs.size();j++){
                if(strs[j].size()<i||strs[j][i]!=ch){
                    val=false;
                    break;
                }
            }
            if(val==false){
                break;
            }
            else{
                ans=ans+ch;
            }
        }
        return ans;
    }
};