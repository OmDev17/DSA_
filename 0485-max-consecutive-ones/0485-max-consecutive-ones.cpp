class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0;
        int num=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                num++;
            }
            else{
                if(num>max){
                    max=num;
                    
                }
                num=0;
            }
        }
        if(num>max){
            max=num;
            num=0;
        }
        return max;
    }
};