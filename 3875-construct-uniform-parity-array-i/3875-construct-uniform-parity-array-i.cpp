class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int oddI=-1;
        int oddF=0;
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]%2==0){
                continue;
            }
            else{
                oddI=i;
                oddF++;
            }
        }
        vector<int>nums2;
        if(oddF>0){
            for(int i=0;i<nums1.size();i++){
                if(i!=oddI){
                    int x=nums1[i]-nums1[oddI];
                    nums2.push_back(x);
                }
                else{
                    nums2.push_back(nums1[oddI]);
                }
            }
        }
        if(nums2.size()==nums1.size()){
            return true;
        }
        else if(oddF==nums1.size()||oddF==0){
            return true;
        }
        else{
            return false;
        }
    }
};