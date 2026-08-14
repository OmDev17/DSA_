class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int i=0;
        int j=n-1;
        int count=0,max=0,minrow=n;
        std::vector<int> arr(2);
        while((i!=m && j!=-1)||(i!=m&&j!=n)){
            if(mat[i][j]==1){
                count++;
            }
            if(j==0){
                if(count>max){
                    max=count;
                    minrow=i;
                    arr[1]=max;
                    arr[0]=minrow;
                }
                i++;
                j=n-1;
                count=0;
            }
            else{
                j--;
            }
        } 
        return arr;
    }
    
};