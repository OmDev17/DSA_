class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                el=nums[i];
                count=1;
            }
            else if(el==nums[i]){
                count++;
            }
            else{
                count--;
            }

        }
        count=0;
        for(int i=0;i<nums.size();i++){
            if(el==nums[i]){
                count++;
            }
        }
        if(count>(nums.size()/2)){
        return el;}
        else{
            return 0;
        }
    }
};