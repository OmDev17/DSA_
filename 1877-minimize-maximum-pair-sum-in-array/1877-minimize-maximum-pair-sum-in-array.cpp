#include <vector>

class Solution {
private:
    void merge(std::vector<int>& nums, int left, int mid, int right) {
        std::vector<int> temp(right - left + 1);
        int i = left;
        int j = mid + 1;
        int k = 0;

        while (i <= mid && j <= right) {
            if (nums[i] <= nums[j]) {
                temp[k++] = nums[i++];
            } else {
                temp[k++] = nums[j++];
            }
        }

        while (i <= mid) {
            temp[k++] = nums[i++];
        }

        while (j <= right) {
            temp[k++] = nums[j++];
        }

        for (int p = 0; p < temp.size(); ++p) {
            nums[left + p] = temp[p];
        }
    }

    void mergeSort(std::vector<int>& nums, int left, int right) {
        if (left >= right) return;

        int mid = left + (right - left) / 2;
        mergeSort(nums, left, mid);
        mergeSort(nums, mid + 1, right);
        merge(nums, left, mid, right);
    }

public:
    int minPairSum(std::vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        int * p1=&nums[0];
        int * p2=&nums[nums.size()-1];
        int max=0,sum=0;
        while(p1<p2){
            sum=*p1+*p2;
            if(sum>=max){
                max=sum;
            }
            p1++;
            p2--;
        }
        return max;
    }
    
};