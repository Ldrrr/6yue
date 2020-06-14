int missingNumber(int* nums, int numsSize){
    int i=0,j=numsSize-1,mid=0;
    while(i<=j){
        mid=(i+j)/2;
        if(nums[mid]==mid)
            i=mid+1;
        else
            j=mid-1;
    }
    return i;
}
