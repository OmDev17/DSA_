class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size()/2;
        vector<int> positives(n,0);
        vector<int> negetives(n,0);
        int j=0,k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                negetives[j]=nums[i];
                j++;
            }
            else{
                positives[k]=nums[i];
                k++;
            }
        }
        j=0,k=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                nums[i]=positives[k];
                k++;
            }
            else{
                nums[i]=negetives[j];
                j++;
            }
        }
        return nums;
    }
};