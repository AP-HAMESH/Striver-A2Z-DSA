#include <stdio.h>

int search(int* nums, int numsSize, int target) {
    
    int left=0;
    int right=numsSize-1;

    while(left<=right)
    {
        int mid= left+(right-left)/2;
        if(target==nums[mid])
        {
            return mid;
        }
        else if(target>nums[mid])
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return -1;
}

int main()
{
    int nums[]={-1,0,3,5,9,12};
    int numsSize=6;


    int x= search(nums,numsSize,5);

    printf("%d",x);

}