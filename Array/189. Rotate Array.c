void rev(int arr[], int start,int end)
{
    int temp;
    while (start<end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }

}


void rotate(int* nums, int numsSize, int k) 
{
    k=k%numsSize;

    rev( nums,0,numsSize-1);
    rev(nums,0,k-1);
    rev(nums,k,numsSize-1);

    for(int i;i<numsSize; i++)
    {
        printf("%d ",nums[i]);
    }


    
}
