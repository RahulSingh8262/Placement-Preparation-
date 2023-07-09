class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int start=0;
        int length=0;
        int max_length=0;
       for(int i=0;i<s.size();i++){
           mp[s[i]]++;
           if(mp[s[i]]==1){
                length=i-start+1;
                if(length>max_length){
                    max_length=length;
                }
               continue;
           }
           else{
              
               while(mp[s[i]]!=1){
                   mp[s[start]]--;
                   start=start+1;
               }
           }
       }
       return max_length;
    }
};