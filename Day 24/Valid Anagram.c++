class Solution {
public:
    bool isAnagram(string a, string b) {
          if(a.size()!=b.size()){
            return false;
        }
        unordered_map<char,int>mp;
        for(int i=0;i<a.size();i++){
            mp[a[i]]++;
            mp[b[i]]--;
        }
        
        for(auto it:mp){
            if(it.second!=0){
                return false;
            }
        }
        return true;
    }
};