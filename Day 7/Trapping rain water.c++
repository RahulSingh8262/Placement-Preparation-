class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>prefix(n,0);
        vector<int>suffix(n,0);

       int max=INT_MIN;
        for(int i=0;i<n;i++){
           if(height[i]>max){
               max=height[i];
           }
           prefix[i]=max;
        }

        max=INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(height[i]>max){
               max=height[i];
           }
           suffix[i]=max;
        }

        int watertrap=0;
        for(int i=0;i<n;i++){
            if(min(prefix[i],suffix[i])-height[i]>0){
                watertrap=watertrap+min(prefix[i],suffix[i])-height[i];
            }
        }
        return watertrap;

    }
};