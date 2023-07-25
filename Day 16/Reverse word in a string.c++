class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        int j=s.size()-1;
        while(j>=0 && s[j]==' '){
            j--;
        }
        while(i<s.size() && s[i]==' '){
            i++;
        }

        string ans="";

        while(j>=i){
            string temp="";
            while(j>=i && s[j]!=' '){
                temp=s[j]+temp;
                j--;
            }
            if(j>=i) ans=ans+temp+" ";
            else ans=ans+temp;

            while(j>=i && s[j]==' ' && j>=i){
                j--;
            }

        }

        return ans;

    }
};