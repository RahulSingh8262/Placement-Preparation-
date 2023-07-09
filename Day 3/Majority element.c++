class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int m_el=0;
        int count=0;
        for(auto it:nums){
            if(count==0){
                m_el=it;
            }
            if(it==m_el){
                count++;
            }
            else{
                count--;
            }
        }
        return m_el;
    }
};