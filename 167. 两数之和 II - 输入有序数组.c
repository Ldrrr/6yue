int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int i=0,j=numbersSize-1;
    *returnSize=2;
    while(i<j){
        if(numbers[i]+numbers[j]==target)
            break;
        else if(numbers[i]+numbers[j]<target){
            i++;
        }
        else
            j--;
    }
    int* arr=(int*)malloc(sizeof(int)*2);
    arr[0]=i+1;
    arr[1]=j+1;
    return arr;
}
