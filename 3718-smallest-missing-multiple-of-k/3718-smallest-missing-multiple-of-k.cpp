class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int max=k;
        for (int i=0;i<nums.size();i++){
            if(nums[i]%k==0){
                if(nums[i]>max){
                    max=nums[i];
                }
            }
        }
        vector <int>result(max+1,0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]%k==0){
                result[nums[i]]++;
            }
        }
        for(int i=k;i<max;i++){
            if(i%k==0){
                if (result[i]==0){
                    return i;
                }
            }
        }
        if(result[k]!=0){
        return max+k;}
        return k;
    }
};