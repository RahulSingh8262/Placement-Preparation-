class Solution {
public:
    int romanToInt(string s) {
        map<char,int>mp={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int sum=0,value=0,i=0;
        for( i=0;i<s.size()-1;i++){
            if(mp[s[i]]==mp[s[i+1]]){
                value=value+mp[s[i]];
            }
            else if(mp[s[i+1]]>mp[s[i]]){
                sum=sum-value-mp[s[i]];
                value=0;
            }
            else{
               // cout<<mp[s[i]]<<endl;
                sum=sum+mp[s[i]]+value;
                value=0;
            }
            //cout<<"sum"<<sum<<endl;
        }
    
            sum=sum+value+mp[s[i]];
        return sum;
    }
};
