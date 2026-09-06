class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int oddI = -1;
        for (int i = 0; i < nums1.size(); i++) {
            if (nums1[i] % 2 != 0) {
                if (oddI == -1 || nums1[i] < nums1[oddI]) {
                    oddI = i;
                }
            }
        }
        if (oddI == -1)
            return true;

        
        for (int i = 0; i < nums1.size(); i++) {
            if (nums1[i] % 2 == 0) {
                if (nums1[i] <= nums1[oddI]) {
                    return false;
                }
            }
        }

        return true;
    }
};