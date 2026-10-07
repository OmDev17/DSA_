/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int * ans=(int *)malloc(sizeof(int)*(2*numsSize));
    *returnSize=2*numsSize;
    for(int i=0;i<2*numsSize;i++){
        ans[i]=nums[i%numsSize];
    }
    return ans;

}