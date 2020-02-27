

int findDuplicate(int* nums, int numsSize){
    int slow = 0, fast = 0;
    do{
        slow = nums[slow];
        fast = nums[nums[fast]];
    }while(slow != fast);
    int pri1 = 0, pri2 = slow;
    while(pri1 != pri2){
        pri1 = nums[pri1];
        pri2 = nums[pri2];
    }
    return pri1;
}


