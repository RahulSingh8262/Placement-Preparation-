class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;
        int j=matrix.size()*matrix[0].size()-1;
        int m=matrix[0].size();
        while(i<=j){
            int mid=(i)+(j-i)/2;
            if(matrix[mid/m][mid%m]==target){
                return true;
            }
            else if(matrix[mid/m][mid%m]>target){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return false;
    }
};