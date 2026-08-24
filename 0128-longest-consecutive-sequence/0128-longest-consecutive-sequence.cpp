class Solution {
public:
    int longestConsecutive(vector<int>& nums) {\
        int max=1;
        int cur=1;
        if(nums.size()==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]!=nums[i]){
            if((nums[i+1]-nums[i])==1){
                cur+=1;
            }
            else{
                cur=1;
            }
            if(cur>max){
                max=cur;
            }
            }
        }
        return max;
    }
};