int search(int* nums, int numsSize, int target){
    if(numsSize == 0)
        return 0;
    int i,low = 0,high = numsSize-1,mid,count = 0;
    while(low <= high){
        mid = (low+high)/2;
        if(nums[mid] == target){
            count++;
            break;
         }
        else if(nums[mid] < target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    if(low > high)
        return 0;
    for(i = mid+1;i < numsSize;i++){
        if(nums[i] == target) 
            count++;
    }
    for(i = mid-1;i >= 0;i--){
        if(nums[i] == target) 
            count++;
    }
    return count;
}
