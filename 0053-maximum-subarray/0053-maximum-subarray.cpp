class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max=nums[0];
        int sum=nums[0];
        for(int i=1;i<nums.size();i++){
            sum = std::max(nums[i], sum + nums[i]);
            max = std::max(max, sum);
            if(sum>max){
                max=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return max;
    }
};